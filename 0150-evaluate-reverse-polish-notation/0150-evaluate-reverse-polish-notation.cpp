class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> st;
        for(auto it: tokens){
            if( it == "+"){
                int p1 = st.top(); st.pop();
                int p2 = st.top(); st.pop();
                st.push(p1 + p2);
            }
            else if( it == "*"){
                int m1 = st.top(); st.pop();
                int m2 = st.top(); st.pop();
                st.push(m1*m2);
            }
            else if( it == "-"){
                int n1 = st.top(); st.pop();
                int n2 = st.top(); st.pop();
                st.push(n2 - n1);
            }
            else if( it == "/"){
                int n1 = st.top(); st.pop();
                int n2 = st.top(); st.pop();
                st.push((int) n2/n1);
            }
            else{
                st.push(stoi(it));
            }
        }
        return st.top();
    }
};