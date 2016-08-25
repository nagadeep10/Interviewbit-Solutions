vector<int> Solution::findPerm(const string A, int B) {
  
vector<int> ans(B); 
int low=1,high=B;
for(int i=0;i<A.length()&&(low<high);i++){
    if(A[i]=='I') ans[i]=low++;
    else ans[i]=high--;
  }
  ans[B - 1] = low;
  return ans;
}
