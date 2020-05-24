void Solution::arrange(vector<int> &A) {
    
    int size = A.size();
    
    for(int i=0;i<A.size();i++) {
        A[i] = A[i] + ((A[A[i]] % size)*size);
    }
    
    for(int i = 0; i<A.size();i++) {
        A[i] = A[i]/size;
    }
    
}