class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char> st;
        
        if(S.size()==0) return "";
        if(S.size()==1) return S;
        
        for(char s:S){
            st.push(s);
        }
        
        string str = "";
        
        while(!st.empty()){
            str.push_back(st.top());
            st.pop();
        }
        
        return str;
    }
};