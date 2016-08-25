vector<int> Solution::repeatedNumber(const vector<int> &A) {
   vector<int>ans;
   long long int a=0,aa=0,banda;
   for(int i=0;i<A.size();i++){
        banda=A[i];
        a+=(banda-i-1);
        aa+=(banda*banda-(long long)(i+1)*(long long)(i+1));
   }
        aa/=a;
        ans.push_back(int((a+aa)/2));
        ans.push_back(int((aa-a)/2));
        return ans;
}

