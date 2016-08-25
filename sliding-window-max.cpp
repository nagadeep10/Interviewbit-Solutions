vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int n = A.size();
    vector<int> ans;
    if (n < B) return ans;
    ans.resize(n-B+1);
    deque<int> Q;
    for (int i=0;i<B;i++) {
        while(!Q.empty()&&A[i]>=A[Q.back()])  Q.pop_back();
        Q.push_back(i);
    }
    for (int i = B; i < n; i++) {
        ans[i-B]=A[Q.front()];
        while (!Q.empty()&&A[i]>=A[Q.back()]) Q.pop_back();
        while (!Q.empty()&&Q.front()<=i-B)  Q.pop_front();
        Q.push_back(i);
    }
    ans[n - B] = A[Q.front()];
    return ans;
}

