class Solution {
public:
    vector<string> findWords(vector<string>& words) {
         unordered_map<char, int> charToRow = {
        {'q', 1}, {'w', 1}, {'e', 1}, {'r', 1}, {'t', 1}, {'y', 1}, {'u', 1}, {'i', 1}, {'o', 1}, {'p', 1},
        {'a', 2}, {'s', 2}, {'d', 2}, {'f', 2}, {'g', 2}, {'h', 2}, {'j', 2}, {'k', 2}, {'l', 2},
        {'z', 3}, {'x', 3}, {'c', 3}, {'v', 3}, {'b', 3}, {'n', 3}, {'m', 3}
    };
    
    vector<string> result;
    for (const auto& word : words) {
        int row = charToRow[tolower(word[0])];
        bool valid = true;

        for (char ch : word) {
            if (charToRow[tolower(ch)] != row) {
                valid = false;
                break;
            }
        }

        if (valid) result.push_back(word);
    }
    return result;
    }
};
