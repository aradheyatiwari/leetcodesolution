class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(),arr1.end(), [&](int a, int b){
            auto x = find(arr2.begin(),arr2.end(),a), y=find(arr2.begin(),arr2.end() , b);
            return x==y? a<b:x<y;
        });
        return arr1;
    }
};