int Solution::maxSubArray(const vector<int> &A) {
    int max=INT_MIN,temp=0,ans=0,i;
    for(i=0;i<A.size();i++){
        if(A[i]>max) max=A[i];
        temp+=A[i];
        if(temp<0) temp=0;
        if(temp>ans) ans=temp;
    }
    if(max<=0) return max;
    else return ans;
}

