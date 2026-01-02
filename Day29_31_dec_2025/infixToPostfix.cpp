//Shunting-Yard Algorithm.

class Solution {
  public:
    string infixToPostfix(string& s) {
        // code here
        stack<pair<char, int>> st;
        string ansStr="";
        
        
        for(char c:s){
            while(!st.empty() && getPrecedence(c)<=st.top().second){
                if(getPrecedence(c)==st.top().second){
                    st.pop();
                    break;
                }
                    ansStr.push_back(st.top().first);
                    st.pop();
                
            }
            
            if(c=='^'){
                st.push(make_pair(c, getPrecedence(c)-1));
            }else if(c=='('){
                st.push(make_pair(c, 0));
            }else if(c=='/'|| c=='*'|| c=='+'|| c=='-'){
                st.push(make_pair(c, getPrecedence(c)+1));
            }else{
                if(c!=')'){
                    ansStr.push_back(c);
                }
            }
            
        }
        
        while(!st.empty()){
            ansStr.push_back(st.top().first);
                st.pop();
        }
        
        
        return ansStr;
    }
    
    int getPrecedence(char& c){
        if(c=='^')return 6;
        else if(c=='*'|| c=='/') return 3;
        else if(c=='+'|| c=='-') return 1;
        else if(c=='(') return 7;
        else if(c==')') return 0;
        else return 8;
    }
};
