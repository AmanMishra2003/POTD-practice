//https://leetcode.com/problems/maximum-score-words-formed-by-letters/

class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters,
                      vector<int>& score) {

        unordered_map<char, int> countMap;

        for (char c : letters) {
            countMap[c]++;
        }

        // creating powerSet
        int size = 1 << words.size();
        vector<vector<string>> powerSet;
        for (int i = 0; i < size; i++) {
            vector<string> temp;
            int mask = i;
            int j = 0;
            while (mask) {
                if ((mask & 1) == 1) {
                    temp.push_back(words[j]);
                }
                j++;
                mask >>= 1;
            }
            powerSet.push_back(temp);
        }

        int maxAns = INT_MIN;

        //looping through powerSet
        for (int i = 0; i < powerSet.size(); i++) {
            int sum = 0; //storing sum
            unordered_map<char, int> temp = countMap; 
            bool flag =true; //flag for situation when I don't have letter to complete counting

            //iterate over single array
            for (int j = 0; j < powerSet[i].size(); j++) {

                // iterate over single character
                for (int k = 0; k < powerSet[i][j].size(); k++) {

                    //if character present in temp map and it have freq more than zero then continue sum
                    if (temp.find(powerSet[i][j][k]) != temp.end() && temp[powerSet[i][j][k]] != 0) {

                        sum += score[powerSet[i][j][k]-'a']; //add it's value
                        temp[powerSet[i][j][k]]--; //dec sum

                    } else {

                        sum=0;//if not present or enough freq not present
                        flag = false; //turn flag false;
                        break;

                    }

                }

                if(sum==0 && !flag)break; //if flag false come out of the iterating array

            }

            if(flag){
                maxAns = max(sum, maxAns);
            }

        }

        return maxAns;
    }
};