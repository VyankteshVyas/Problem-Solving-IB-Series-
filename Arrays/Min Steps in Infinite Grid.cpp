int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int x=A[0],y=B[0];
    int ts=0;
    for(int i=1;i<A.size();i++){
        if(abs(x-A[i])<=abs(y-B[i])){
            ts+=abs(x-A[i])+(abs(y-B[i])-abs(x-A[i]));
        }else{
            ts+=abs(y-B[i])+(abs(x-A[i])-abs(y-B[i]));
        }
        x=A[i];
        y=B[i];
    }
    return ts;
}
