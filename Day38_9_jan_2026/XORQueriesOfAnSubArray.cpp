//https://leetcode.com/problems/xor-queries-of-a-subarray/
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        //TC--> O(m+n);
        //SC--> O(m+n);
        vector<int> XORarray; //made an prefix XOR array
        vector<int> ans;

        int num = 0;

        for(int i=0;i<arr.size();i++){
            num^=arr[i];
            XORarray.push_back(num);
        }

        for(auto i:queries){
            if(i[0]==0)ans.push_back(XORarray[i[1]]);
            else ans.push_back(XORarray[i[1]]^XORarray[i[0]-1]);
        }
        return ans;
    }
};