/*
https://leetcode.com/problems/daily-temperatures/
*/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        //Optimal Solution //very nice question 
        //--> it includes pair inside stack
        int n = t.size(); 

        stack<pair<int,int>> st;
        vector<int> ans(n); //created an array with 0 value at every index

        //iterated over the array
        for(int i=0;i<n;i++){

            //while the stack is not empty and currentStack has lower value then the current value run loop
            while(!st.empty() && st.top().first<t[i]){

                int idx = st.top().second;
                ans[idx] = i-idx; //add the value in the idx index in ans array (value is the distance between both temp value therefore diff between there index)
                st.pop(); //pop out the top value
            }

            st.push(make_pair(t[i],i)); //push the new value for next element 
        }
        
        return ans;


    }
};