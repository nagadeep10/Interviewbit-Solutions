// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    int ans=0,n=X.size(),i;
    for(i=1;i<n;i++){
        ans+=max(abs(X[i]-X[i-1]),abs(Y[i]-Y[i-1]));
    }
    return ans;
}

