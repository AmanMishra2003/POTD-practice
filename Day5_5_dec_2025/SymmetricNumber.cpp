/*
https://leetcode.com/problems/count-symmetric-integers/
*/

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            if(len(i)%2==1) continue;
            int numlen = len(i);
            int numSum = sumFunc(i);
            int halfNumSum = halfNumSumFunc(i, numlen);


            if((numSum - halfNumSum) == halfNumSum) count++;
        }

        return count;
    }

    int len(int x){
        int count=0;
        while(x){
            x/=10;
            count++;
        }
        return count;
    }

    int sumFunc(int x){
        int rem=0;
        int numSum = 0;
        while(x){
            rem=x%10;
            numSum+=rem;
            x/=10;
        }

        return numSum;
    }

    int halfNumSumFunc(int x, int numlen){
        int rem=0;
        int numSum = 0;
        int i = numlen;
        while(i>(numlen/2)){
            rem=x%10;
            numSum+=rem;
            x/=10;
            i--;
        }

        return numSum;
    }
};