class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_avg = numeric_limits<double>::lowest();
        double w_sum = 0;
        int n = nums.size();
        int start = 0;

        for (int i = 0; i < n; i++) {
            w_sum += nums[i];

            if ((i - start + 1) == k) {
                double avg = w_sum / k;
                max_avg = max(avg, max_avg);
                w_sum -= nums[start];
                start += 1;
            }
        }

        return max_avg;
    }
};
