vector<int> Solution::plusOne(vector<int> &A) {
    vector<int>ans;
    int n=A.size(),i=n-1,j=0,
    int carry=1,sum=0;
    while(A[j]==0) j++;
    while(i>=j){
        sum=A[i]+carry;
        carry=sum/10;
        sum%=10;
        ans.push_back(sum);
        i--;
    }
    if(carry>0) ans.push_back(carry);
    reverse(ans.begin(),ans.end());
    return ans;
}

