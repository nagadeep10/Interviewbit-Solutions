int mycompare(string a,string b){
    string s1=a+b;
    string s2=b+a;
    if(s1>s2) return 1;
    else return 0;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string>arr;
    bool flag=0;
    for(int i=0;i<A.size();i++){
      if(A[i]!=0) flag=1;
      arr.push_back(to_string(A[i])); 
    } 
    sort(arr.begin(),arr.end(),mycompare);
    string s="";
    for(int i=0;i<A.size();i++) s+=arr[i];
    if(flag==0) s='0';
    return s;
}


