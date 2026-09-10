class Solution {
public:
bool isPossible(vector<int>arr,int m,int k,int day){
        int cons = 0 ; int b = 0;
        for(int i = 0;i < arr.size();i++){
            if(arr[i] <= day){
                cons++;
                if(cons == k){
                    b++;
                    cons = 0;
                }
            }
            else cons = 0;
        }
        return b >= m;
    }
   int minDays(vector<int>&bloomDay,int m,int k){
    int ans = -1;
    int start = *min_element(bloomDay.begin(),bloomDay.end());
    int end = *max_element(bloomDay.begin(),bloomDay.end());
    while(start<=end){
        int mid = start+(end-start)/2;
        if(isPossible(bloomDay,m,k,mid)){
            ans = mid;
            end = mid-1;
        }
        else start=mid+1;
    }
    return ans;
   }
};   