// https://www.geeksforgeeks.org/problems/finding-the-numbers0215/1

class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        
        sort(arr.begin(), arr.end());
        vector<int> ans;
        
        for(int i=1;i<arr.size();){
            if(arr[i-1]==arr[i]){
                i+=2;
            }else{
                ans.push_back(arr[i-1]);
                i+=1;
            }
        }
        
        if(ans.size()==1){
            ans.push_back(arr.back());
        }
        
        
        
        return ans;
    }
};