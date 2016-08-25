int Solution::largestRectangleArea(vector<int> &A) {
   int ans=0,temp,area;
   int n=A.size(),i;
   stack<int>st;
   for(i=0;i<n;i++){
       if(st.empty()||A[st.top()]<=A[i]) st.push(i);
       else{
           while(!st.empty()&&A[st.top()]>A[i]){
               temp=st.top();
               st.pop();
               area=A[temp]*(i-(st.empty()?0:st.top()+1));
               ans=max(ans,area);
            }
            st.push(i);
       }
   }
   while(!st.empty()){
        temp=st.top();
        st.pop();
        area=A[temp]*(i-(st.empty()?0:st.top()+1));
        ans=max(ans,area);    
   }
   return ans;
}

