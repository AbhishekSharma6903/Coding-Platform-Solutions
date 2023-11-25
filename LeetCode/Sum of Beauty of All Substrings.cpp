class Solution {
public:
    int maxi(const std::vector<int>& mappi) {
        int maxi = INT_MIN;
        for (int i = 0; i < mappi.size(); i++) {
            if (mappi[i] > maxi) {
                maxi = mappi[i];
            }
        }
        return maxi;
    }

    int mini(const std::vector<int>& mappi) {
        int mini = INT_MAX;
        for (int i = 0; i < mappi.size(); i++) {
            if (mappi[i] < mini && mappi[i] > 0) {
                mini = mappi[i];
            }
        }
        return mini;
    }

    int beautySum(std::string s) {
        int sum = 0;
        std::vector<int> mpp(27);
        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                mpp[s[j] - 'a']++;
                int maxii = maxi(mpp);
                int minii = mini(mpp);
                sum = sum + maxii - minii;
            }
            mpp.assign(27, 0);
        }
        return sum;
    }
};
