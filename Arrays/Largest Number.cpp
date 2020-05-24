static bool myCompare(int X, int Y) 
{ 
   
    string first= to_string(X);
  
   
    string second= to_string(Y); 
  
    
    return first+second > second+first; 
} 
string Solution::largestNumber(const vector<int> &A) {
   int n=A.size();
vector<int> v;
for(int i=0;i<n;i++){
int x=A[i];
v.push_back(x);
}
sort(v.begin(),v.end(),myCompare);
if(v[0]==0){
return "0";
}
string s=to_string(v[0]);
for(int i=1;i<n;i++)
s.append(to_string(v[i]));
return s;
}