/*
https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1
*/

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int> ng;
        
        stack<int> st; //created a stack 
        ng.push_back(-1); //pushed -1 as all last element have no greater next element
        st.push(arr.back());//pushed last element to stack
        
        //looping from n-2 to 0
        for(int i=arr.size()-2;i>=0;i--){
            
            //removing all element smaller than current element from the stack
            while(!st.empty() && arr[i]>=st.top()){
                st.pop();
            }
            
            //if after removing stack is empty means no greater element is present 
            if(st.empty()){
                ng.push_back(-1);//insert -1 in nextGreater vector
            }else{
                ng.push_back(st.top());//else the top most element in the stack is nextGreatest
            }
            
            st.push(arr[i]);//push current element in the stack
        }
        reverse(ng.begin(), ng.end());//reverse the array as we have iterated from last to first
        
        return ng;
    }
};