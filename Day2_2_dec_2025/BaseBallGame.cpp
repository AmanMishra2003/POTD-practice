/*
link -> https://leetcode.com/problems/baseball-game/description/
*/

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int t = 0, a=0, b=0;
        for(int i=0; i<operations.size();i++){
            if(operations[i]=="C"){
                st.pop();
            }else if(operations[i]=="D"){
                t = st.top();
                st.push(2*t);
            }else if(operations[i]=="+"){
                a = st.top();
                st.pop();
                b = st.top();
                st.push(a);
                st.push(a+b);
            }else{
                st.push(stoi(operations[i]));
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum+= st.top();
            st.pop();
        }

        return sum;
    }
};