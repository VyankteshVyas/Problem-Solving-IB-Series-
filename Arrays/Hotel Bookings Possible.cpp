bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int k) {
     int n=arrive.size();
     int count=0;
    vector<pair<int,int>>res;
    int max_people=0;
     for(int i=0;i<n;i++)
     {
         res.push_back(make_pair(arrive[i],1));
         res.push_back(make_pair(depart[i],0));
     }
     sort(res.begin(),res.end());
     for(int i=0;i<res.size();i++)
     {
         if(res[i].second==1){
          count++;
         max_people=max(count,max_people);
         
           
         }
         else
          count--;
     }
   if(max_people>k)
           return false;
  
     return true;
}