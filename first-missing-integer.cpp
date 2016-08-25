int Solution::firstMissingPositive(vector<int> &A) {
    int n=A.size();
    for(int i=0;i<n;i++){
        if(A[i]>0&&A[i]<n){
            int temp=A[i]-1;
            if(A[temp]!=A[i]){
                swap(A[temp],A[i]);
                i--;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(A[i]!=i+1) return (i+1);
    }
    return (n+1);
}

