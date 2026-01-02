// https://www.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1

class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        // code here
        stack<int> st;
        
        for(int i=0;i<arr.size();i++){
           
            if(arr[i]=="*" || arr[i]=="+"|| arr[i]=="-"|| arr[i]=="/"|| arr[i]=="^"){
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                
                    if(arr[i]=="*" ){
                         int num = num1*num2;
                        st.push(num);
                    }else if(arr[i]=="+"){
                        int num = num1+num2;
                        st.push(num);
                    }else if(arr[i]=="-"){
                        int num = num1-num2;
                        st.push(num);
                    }else if(arr[i]=="/"){
                        int num = floor((double)num1/num2);
                        st.push(num);
                    }else if(arr[i]=="^"){
                        int num = pow(num1,num2);
                        st.push(num);
                    }
                
            }else{
                st.push(stoi(arr[i]));
            }
        }
        
        return st.top();
    }
};