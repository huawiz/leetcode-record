class Solution {
public:
    void removeSpace(string& s){
        int slow = 0;
        for(int i =0;i<s.size();i++){
            if(s[i]!=' '){
                //如果slow!=0代表在單字中間，補空格
                if(slow!=0){s[slow++]= ' ';}
            }
           //搬移快指針元素到慢指針 
            while(i<s.size() && s[i]!= ' '){
                s[slow++] = s[i++];
            }
        }
        //結束，重新fix字串長度
        s.resize(slow);
    }
    void reverse(string& s,int start,int end){
        for(int i = start,j=end;i<j;i++,j--){
            swap(s[i],s[j]);
        }
    }
    string reverseWords(string s) {
        removeSpace(s);
        reverse(s,0,s.size()-1);
        int start = 0;
        for(int i =0;i<=s.size();i++){
            if(i==s.size()||s[i]==' '){
                reverse(s,start,i-1);
                start = i+1;
            }
        }
        return s;
    }
};