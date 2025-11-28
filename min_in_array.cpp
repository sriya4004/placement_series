int getMin( vector<int> &arr){
	int n = arr.size();
	int min = arr[0];
	for(int i = 1; i<n; i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	return min;
}
