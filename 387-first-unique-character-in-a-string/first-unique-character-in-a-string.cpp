class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};
        int firstIndex[26];
        fill(firstIndex, firstIndex + 26, -1);

        for (int i = 0; i < s.size(); i++) {
            int idx = s[i] - 'a';
            if (firstIndex[idx] == -1) firstIndex[idx] = i;
            count[idx]++;
        }

        int result = INT_MAX;
        for (int i = 0; i < 26; i++) {
            if (count[i] == 1 && firstIndex[i] < result) {
                result = firstIndex[i];
            }
        }
        return result == INT_MAX ? -1 : result;
    }
};