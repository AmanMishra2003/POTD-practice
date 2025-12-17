/*
https://leetcode.com/problems/reverse-words-in-a-string/ 
*/

class Solution {
public:

    // space complexity - o(k)
    string reverseWords(string s) {
        //created a string vector
        vector<string> strVector;

        //created two iterator
        int i=0, j=0;

        //while loop which will move window 
        while(j<=s.size() && i<s.size()){
            if(s[i]==' ') i++;
            else if(s[j]==' ' || j==s.size()){
                string tempStr =s.substr(i,j-i);
                strVector.push_back(tempStr);
                i=j+1;
            }
            j++;
        }

        //reverse the string vector to interate string in reverse order
        reverse(strVector.begin(), strVector.end());

        string returnStr="";
        for(int i=0;i<strVector.size();i++){
            returnStr+=strVector[i];
            if(i!=strVector.size()-1)returnStr+=" "; //added " " after each word except the last
        }

        return returnStr;
    }
};