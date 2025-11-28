class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int n = arr.size();
        int maxi = arr[0];
        int mini = arr[0];
        for(int i = 1; i<n; i++){
            if(arr[i]>maxi){
                maxi = arr[i];
            }
            if(arr[i]<mini){
                mini = arr[i];
            }
        }
        
        return {mini,maxi};
    }
};
