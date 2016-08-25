string Solution::simplifyPath(string A) {
    vector<string> ans;
    string temp="",result;
    A+="/";
    int n=A.length();
    for(int i=0;i<n;i++){
        if(A[i]=='/'){
            if(temp=="") continue;
            else if(temp==".."){
                if(ans.size()!=0) ans.pop_back();
            } 
            else if(temp=="."){
                //Do nothing
            }
            else{
                ans.push_back(temp);
            }
            temp.clear();
        }
        else{
            temp+=A[i];
        }
    }
    if(ans.size()==0) return "/";
    else{
        for(int i=0;i<ans.size();i++){
            result+=("/"+ans[i]);
        }
    }
    return result;
}

