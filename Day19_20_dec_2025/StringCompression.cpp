/*
https://leetcode.com/problems/string-compression-iii/
*/

class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int i=0, j=0;

        while(i<word.size()){
            if(word[i]==word[j]){
                i++;
                if(i-j==9){
                    int len = i-j;
                    comp.push_back(len+'0');
                    comp.push_back(word[j]);
                    j=i;
                    i++;
                }
            }else{
                int len = i-j;
                comp.push_back(len+'0');
                comp.push_back(word[j]);
                j=i;
                i++;
            }
        }

        if(j<word.size()){
        comp.push_back((word.size()-j)+'0');
        comp.push_back(word[j]);
        }

        return comp;
    }
};