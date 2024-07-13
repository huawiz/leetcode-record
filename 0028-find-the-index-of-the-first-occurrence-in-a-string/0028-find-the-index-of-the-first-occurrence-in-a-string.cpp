class Solution {
public:
    void getNext(int* next,const string& s){
        int j = -1;
        next[0] = j;
        for(int i =1;i<s.size();i++){
            while(j>=0&&s[i]!=s[j+1]){
                j = next[j];
            }
            if(s[i]==s[j+1]){
                j++;
            }
            next[i] = j;
        }
    }
    int strStr(string haystack, string needle) {
        if (needle.size() ==0){return 0;}
        vector<int> next(needle.size());
        int j = 0;
        for(int i=0;i<haystack.size();i++){
            while(j>0&&haystack[i]!=needle[j]){
                j = next[j-1];
            }
            if(haystack[i]==needle[j]){
                j++;
            }
            if(j==needle.size()){
                return (i-needle.size()+1);
            }
        }
        return -1;
    }
};