/*
https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
*/


class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> oneIdx;
        vector<int> ans;

        //collecting all index of 1 and collecting them in oneIdx vector;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1') oneIdx.push_back(i);
        }

        for(int i=0;i<boxes.size();i++){
            int sum = 0;
            for(int j:oneIdx){
                int n = abs(i - j);
                sum+=n;
            }
            ans.push_back(sum);//storing sum of distance between indexes and pushing to ans
        }

        return ans;
    }
};


/*
Optimal Soln
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int moves = 0;
        int count = 0;
        int n = boxes.size();

        vector<int> left(n);
        vector<int> right(n);
        vector<int> ans(n);

        //left to right moves in left array (number of 1 and number of movement from left of the current index)
        for(int i=0;i<boxes.size();i++){
            left[i] = moves;
            if(boxes[i]=='1')count++;
            moves+=count;
        }

        moves = 0;
        count = 0;

        //right to left moves in right array (number of 1 and number of movement from right of the current index)
        for(int i=boxes.size()-1;i>=0;i--){
            right[i] = moves;
            if(boxes[i]=='1')count++;
            moves+=count;
        }

        for(int i=0;i<boxes.size();i++){
            ans[i] = left[i]+right[i];
        }

        return ans;
    }
};
*/