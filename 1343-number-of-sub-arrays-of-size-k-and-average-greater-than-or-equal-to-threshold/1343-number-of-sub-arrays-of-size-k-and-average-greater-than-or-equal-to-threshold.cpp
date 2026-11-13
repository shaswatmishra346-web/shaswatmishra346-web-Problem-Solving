class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left = 0, count = 0;
        long long sum = 0;
        long long target = (long long)threshold * k;

        for (int right = 0; right < arr.size(); right++) {
            sum += arr[right];

            if (right - left + 1 > k) {
                sum -= arr[left];
                left++;
            }

            if (right - left + 1 == k && sum >= target) {
                count++;
            }
        }
        return count;
    }
};