class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int s=strs.size();
        string prefix=strs[0];
        for(int x=1; x<s; x++){
            while(strs[x].find(prefix) != 0){ // means substring is not found at 0th index
                prefix.pop_back();
                if(prefix.empty()){
                    return "";
                }
            }
        }
        
        return prefix;
    }
};