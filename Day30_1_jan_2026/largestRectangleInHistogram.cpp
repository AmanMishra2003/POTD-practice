// https://leetcode.com/problems/largest-rectangle-in-histogram/

class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        //better solution --> o(n)

        /*
            1--> having next greatest element array
            2--> having next samllest element array

            using formula --> ( left(i) - small(i) + 1 ) * value(i);
        */

        stack <int> st;
        vector<int> left_small;
        vector<int> right_small;
        int maxAns = 0;

        int n = h.size();

        //left boundries of all index
        for(int i=0;i<n;i++){
            while(!st.empty() && h[st.top()]>=h[i]){
                st.pop();
            }

            if(st.empty()){
                left_small.push_back(0);
            }else{
                left_small.push_back(st.top()+1);
            }

            st.push(i);
        }

        for(int i:left_small){
            cout<<i<<" ";
        }
        cout<<endl;

        while(!st.empty())st.pop();

        //right boundries of all index
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && h[st.top()]>=h[i]){
                st.pop();
            }

            if(st.empty()){
                right_small.push_back(n-1);
            }else{
                right_small.push_back(st.top()-1);
            }
            st.push(i);
        }
        reverse(right_small.begin(), right_small.end());

        for(int i:right_small){
            cout<<i<<" ";
        }
        cout<<endl;

        

        for(int i=0;i<n;i++){
            int num = (right_small[i]-left_small[i]+1)*h[i];
            maxAns = max( maxAns, num );
        }

        return maxAns;
    }
};