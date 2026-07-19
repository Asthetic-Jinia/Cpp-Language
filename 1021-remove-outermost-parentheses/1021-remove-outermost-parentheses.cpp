class Solution {
public:
    string removeOuterParentheses(string s) {
       int n=s.size();
       int i=0;
       string temp="";
       //Remove the leading paranthesis
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(count>0){
                    temp.push_back(s[i]);
                }
                count++;
            }else{
                if(s[i]==')'){
                    count--;
                    if(count>0){
                        temp.push_back(s[i]);
                    }
                    
                }
            }
        }
        return temp;
    }
};