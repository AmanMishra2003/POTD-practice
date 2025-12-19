/*
https://leetcode.com/problems/longest-common-prefix/
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string commonStr;
        // string currentStr = "";
        if(strs.size()==1){
            return strs[0];
        }else{
            for(int i=0; i<strs.size()-1;i++){
                string str1 = strs[i];
                string str2 = strs[i+1];
                commonStr = "";
                for(int j=0;j<str1.size();j++){
                    if(str1[j]==str2[j]){
                        commonStr.push_back(str1[j]);
                    }else{
                        break;
                    }
                }
                strs[i+1] = commonStr;
            }

            return commonStr;
        }
    }
};