class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.size();
        string temp="";
        
        for(int i=0; i<n; i++){
            if(isupper(s[i])){
                temp+= tolower(s[i]);
            }
            if((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z'))      // colon are imp // 
                temp+= s[i];
        }
        
        int m= temp.size();
        if(m==0 || m==1) return true;
        
        for(int i=0; i<=m/2; i++){
            if(temp[i]!= temp[m-i-1]) return false;
        }
        
        return true;
    }
};
