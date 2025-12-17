/*
https://leetcode.com/problems/product-of-array-except-self/
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        vector<int> forwardMultiple;//created a forward List of multiples.
        vector<int> backwardMultiple;//created a backward list of multiples.
        vector<int> returnVector;

        //added one to forwardList because the first element in returnVector will be multiple of all index except zero index.
        forwardMultiple.push_back(1);
        //added first element of nums because we are going to do prefix multiplication from forward.
        forwardMultiple.push_back(nums[0]);

        // calculated prefix multiplication from forward to second last element.
        for(int i=1;i<nums.size()-1;i++){
            forwardMultiple.push_back(forwardMultiple[i]*nums[i]);
        }

        //reverse the array because we are going to do same thing just from backward
        reverse(nums.begin(), nums.end());

        backwardMultiple.push_back(nums[0]);
        for(int i=1;i<nums.size()-1;i++){
            backwardMultiple.push_back(backwardMultiple[i-1]*nums[i]);
        }
        
        // reverse the backwardMultiple array it will make easier for multiplication
        reverse(backwardMultiple.begin(), backwardMultiple.end());

        //multiply value in both array (Note: keep in mind backwardMultiple array size is taken because we have one extra element in forwardMultiple array that is 1)
        for(int i=0;i<backwardMultiple.size();i++){
            returnVector.push_back(backwardMultiple[i]*forwardMultiple[i]);
        }

        //because of one extra element we put last element to returnVector
        returnVector.push_back(forwardMultiple[forwardMultiple.size()-1]);


        return returnVector;
    }
};

/*
Approach example
Input: nums = [1,2,3,4]

ForwardMultiple = [1,1,2,6]
BackwardMultuple = [24,12,4]

Output: [24,12,8,6]
*/