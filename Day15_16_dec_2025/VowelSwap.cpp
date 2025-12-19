/*
https://leetcode.com/problems/reverse-vowels-of-a-string/
*/
class Solution {
public:
    string reverseVowels(string s) {
        vector<int> vowelOrder;
        unordered_set<char> uset ={'A','E','I','O','U','a','e','i','o','u'};

        for(int i=0;i<s.size();i++){
            if(uset.find(s[i])!=uset.end()){
                vowelOrder.push_back(i);
            }
        }

        for(int i=0;i<vowelOrder.size()/2;i++){
            swap(s[vowelOrder[i]],s[vowelOrder[vowelOrder.size()-i-1]]);
        }

        

        return s;
        
    }
};