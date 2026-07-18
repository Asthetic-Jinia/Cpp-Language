class Solution {
public:
    int findGCD(vector<int>& nums) {
        //Leet hub test
        int n=nums.size();
        int a=*max_element(nums.begin(),nums.end());
        int b=*min_element(nums.begin(),nums.end());
        if(a%b==0){
            return b;
        }
        int gcd=1;
        for(int i=1;i<a;i++){
            if(a%i==0 && b%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
};