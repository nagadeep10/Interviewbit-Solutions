int Solution::braces(string A) {
    stack<char>st;
    int n=A.length(),cnt=0;
    char temp;
    for(int i=0;i<n;i++){
        if(A[i]!=')') st.push(A[i]);
        else{
            cnt=0;
            while(st.top()!='('){
                st.pop();
                cnt++;
            }
            st.pop();
            if(cnt<=1) return 1;
        }
    }
    return 0;
}

