class Solution {
public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        int n = arr.size();
        if(n < 2) return {}; // edge case: less than 2 elements

        sort(arr.begin(), arr.end()); // two-pointer needs sorted array

        int s = 0, e = n - 1;
        int bestDiff = INT_MAX;
        vector<int> bestPair; // store result

        while(s < e) {
            int sum = arr[s] + arr[e];
            int diff = abs(sum - target);

            if(diff < bestDiff) {
                bestDiff = diff;
                bestPair = {arr[s], arr[e]};
            }

            if(sum < target)
                s++;
            else
                e--;
        }

        return bestPair; // will return [] if array had <2 elements
    }
};
