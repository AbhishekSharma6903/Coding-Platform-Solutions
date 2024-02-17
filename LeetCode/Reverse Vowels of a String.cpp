#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int start = 0;
        int end = n - 1;

        while (start < end) {
            // Find the next vowel from the start
            while (start < end && !isVowel(s[start])) {
                start++;
            }
            // Find the previous vowel from the end
            while (start < end && !isVowel(s[end])) {
                end--;
            }
            // Swap the vowels
            if (start < end) {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }

        return s;
    }

    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
