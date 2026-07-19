class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int e=n-1;
        int s=0;
        string ans="";
        if(num[n-1]%2!=0){
            return num;
        }else{
            while( e>=0 && num[e]%2==0){
                e--;
            }
            if(e==-1){
                return "";
            }
            if(num[e]%2!=0){
               for(int i=s;i<=e;i++){
                    ans.push_back(num[i]);
               } 
            }
        }
        return ans;
    }
};