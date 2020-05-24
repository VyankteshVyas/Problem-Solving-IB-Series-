vector<int> Solution::subUnsort(vector<int> &A) {
    int minimum=INT_MAX;
    int maximum=INT_MIN;
    vector<int>res;
    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i]>A[i+1])
           minimum=min(minimum,A[i+1]);
    }
    for(int i=A.size()-1;i>0;i--)
    {
        if(A[i]<A[i-1])
           maximum=max(maximum,A[i-1]);
    }
    if(minimum==INT_MAX || maximum==INT_MIN)
    {
        res.push_back(-1);
        return res;
    }
    int l,r;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>minimum){
          l=i;
          break;
        }
    }
    for(int i=A.size()-1;i>0;i--)
    {
       if(A[i]<maximum){
         r=i;
         break;
       }
    }
    
    res.push_back(l);
    res.push_back(r);
    return res;
    
}