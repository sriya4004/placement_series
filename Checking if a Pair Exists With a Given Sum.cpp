bool pairExists(vector<int>& arr, int target) {
    int s = 0, e = arr.size() - 1;
    while(s<e){
      int sum = arr[s]+arr[e];
      if(sum == target) return true;
      else if( sum < target ) s++;
      else e--;
    }
  return false;
}
