/*
https://leetcode.com/problems/group-anagrams/
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> returnVector; 
        vector<string> s(strs.begin(), strs.end()); //created a temp vector

        for(int i=0;i<s.size();i++){
            sort(s[i].begin(), s[i].end()); //sorted each word in vector
        }

        vector<int> temp; //declared a temp vector
        for(int i=0;i<s.size();i++){

            if(s[i]!="*")temp.push_back(i);
            else continue;

            //compared words for anagram
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    temp.push_back(j); //pushed index of anagram and split each range by -1
                    s[j]="*"; //put * on compared anagram to remove duplicacy
                }
            }

            temp.push_back(-1); //after each anagram range put a -1 which will be needed later
        }
        

        vector<string> strArr;
        for(int i:temp){

            //wheneven I found a -1 pushed into returnVector arrayofarray
            if(i==-1){
                returnVector.push_back(strArr);
                strArr.clear();
                continue;
            }

            strArr.push_back(strs[i]);//else push word from strs into strArr
        }

        sort(returnVector.begin(), returnVector.end()); //sorted returnVectorArray
        return returnVector;
    }
};

//very Brute force approach but worked
/*
Constraints:
1 <= strs.length <= 10^4
0 <= strs[i].length <= 100 
strs[i] consists of lowercase English letters.
*/