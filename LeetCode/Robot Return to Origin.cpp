class Solution {
public:
    bool judgeCircle(string moves) {
        pair<int, int> vec; // (x, y) == (0, 0)
        for (auto& s : moves) {
            if (s == 'R')
                vec.first++;
            else if (s == 'L')
                vec.first--;
            else if (s == 'U')
                vec.second++;
            else if (s == 'D')
                vec.second--;
        }
        return !vec.first && !vec.second;
    }
};
