class Solution {

public:
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9') || (ch>='A' && ch<='Z')){
            return 1;
        }
        return 0;
    }
    char toLowerCase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        }else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }
    bool checkPalindrome(string a){
        int st=0;
        int e=a.size()-1;
        while(st<=e){
            if(a[st]!=a[e]){
                return 0;
            }else{
                st++;
                e--;
            }
        }
        return 1;
    }
    bool isPalindrome(string s) {
        // Remove non-Alphanumeric letters
        string str="";
        for(int i=0;i<s.size();i++){
            if(valid(s[i])){
                str.push_back(s[i]);
            }
        }
        // convert into lower case
        for(int j=0;j<str.size();j++){
            str[j]=toLowerCase(str[j]);
        }
        //check palindrome
        return checkPalindrome(str);
    }
};