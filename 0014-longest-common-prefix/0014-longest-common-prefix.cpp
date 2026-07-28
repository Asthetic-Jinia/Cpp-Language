class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int s=strs.size();
        /*
        string prefix=strs[0];
        for(int x=1; x<s; x++){
            while(strs[x].find(prefix) != 0){ // means substring is not found at 0th index
                prefix.pop_back();
                if(prefix.empty()){
                    return "";
                }
            }
        } */

        string prefix="";
        sort(strs.begin(),strs.end());
        int i=0;
        while(i<strs[0].size() && i<strs.back().size()){ // compare the first and last string
            if(strs[0][i]==strs.back()[i]){
                prefix.push_back(strs[0][i]);
                i++;
                
            }else{
                break;
            }
        }
        
        return prefix;
    }
};