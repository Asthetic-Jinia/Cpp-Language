class Solution {
public:
    string removeExtraSpace(string a){
        string temp="";
        int n=a.size();
        int i=0;
        // skip leading spaces
        while(i<n && a[i]==' '){
            i++;
        }
        while(i<n){
            // copy non space ch
            while(i<n && a[i]!=' '){
                temp.push_back(a[i]);
                i++;
            }

            //Skip consicutive spaces
            while(i<n && a[i]==' '){
                i++;
            }
            // Add one space if another word exist
            if(i<n){
                temp.push_back(' ');
            }
        }
        return temp;
    }
    string reverseWords(string s) {
        string temp=removeExtraSpace(s);
        int n=temp.size();
        int st=0;
        int e=n-1;
        string str="";        
        while(e>=0){
            int j=e;
            //find beginning of current word
            while(j>=0 && temp[j]!=' '){
                j--;
            }
            //copy current word
            for(int k=j+1;k<=e;k++){
                str.push_back(temp[k]);
            }
            // add space if more words remains
            if(j>0){
                str.push_back(' ');

            }
            e=j-1;
        }
        return str;
    }
};