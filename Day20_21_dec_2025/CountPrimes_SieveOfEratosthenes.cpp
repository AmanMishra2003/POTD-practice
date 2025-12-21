/*
https://leetcode.com/problems/count-primes/description/
*/

class Solution {
public:
    int countPrimes(int n) {
        vector<int> nums(n);
        int count=0;
        for(int i=2;i<=sqrt(n);i++){
            if(nums[i]==0){
                for(int j=i ; j*i<n ;j++){
                        nums[j*i]=1;
                }
            }
        }

        for(int i=2;i<n;i++){
            if(nums[i]==0){
                count++;
            }
        }
        return count;
    }
};