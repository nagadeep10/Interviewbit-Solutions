int Solution::evalRPN(vector<string> &A) {
    stack<int> st;
    int a,b;
    char c;
    for(int i = 0; i <A.size();i++){
        c=A[i][0];
        if(c=='+'||A[i]=="-"||c=='*'||c=='/') {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            switch(c) {
                case '+' :
                    st.push(a+b);
                    break;
                case '-' :
                    st.push(b-a);
                    break;
                case '*':
                    st.push(a*b);
                    break;
                case '/':
                    st.push(b/a);
                    break;
            }
        } 
        else {
            st.push(atoi(A[i].c_str()));
        }
    }
    return st.top();
    
}

