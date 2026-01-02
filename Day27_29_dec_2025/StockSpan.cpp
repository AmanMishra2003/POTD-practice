/*
https://www.geeksforgeeks.org/problems/stock-span-problem-1587115621/1
*/

class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        vector<int> ans;
        
        stack<int> st;//created a stack to hold index (we are holding index because we will calculate distance)
        st.push(0);//pushed 0 (first arr index)
        ans.push_back(1);//pushed one because ans array will always start from one
        
        for(int i=1;i<arr.size();i++){
            //we will pop out index from stack untill we find one with greater value than current value
            while(!st.empty() && arr[i]>=arr[st.top()]){
                st.pop();
            }
            
            
            if(st.empty()){
                ans.push_back(i+1);//if stack gets empty push i+1
            }else{
                ans.push_back(i - st.top());//else distance between both + 1
            }
            
            st.push(i);
        }
        
        return ans;
        
    }
};