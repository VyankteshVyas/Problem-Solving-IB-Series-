int comb(int n,int k) {
    long long res = 1;
    
    if(k > n-k) {
        k = n-k;
    }
    
    for(int i=0;i<k;i++) {
        res *= n-i;
        res /= i+1;
    }
    
    return (int)res;
}

int Solution::uniquePaths(int A, int B) {
    
    int answer = 1;
    
    if(A == 1 || B == 1) {
        return answer;
    }
    else {
        answer = comb(A+B-2,A-1);
    }
    
    return answer;
    
}