class Solution {
public:
    bool ispossible(vector<int> arr,int h,int k) {
      long long hours = 0;
      for(int i=0; i<arr.size();i++){
        hours += (arr[i]+k-1)/k;
        }  
        return hours <= h;
    }
    int minEatingSpeed(vector<int> & piles,int h){ 
    int start = 1;
    int ans =-1;
    int end = *max_element(piles.begin(),piles.end());
    while(start<=end){
        int mid= start + (end-start)/2;
        if(ispossible(piles,h,mid)){
            ans = mid;
            end = mid-1;
        }
        else start = mid+1;
    }
    return ans;
    }
};