//https://leetcode.com/problems/counting-bits/submissions/1877993747/

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i=0;i<=n;i++){
            int count=0;
            int mask =i;
            while(mask){
                if(mask&1==1){
                    count++;
                }
                mask>>=1;
            }
            ans.push_back(count);
        }

        return ans;
    }
};