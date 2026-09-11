class Solution {
public:
    bool detectCapitalUse(string w) {
        int upperCount = 0;
        for (char c : w) {
            if (c >= 'A' && c <= 'Z') upperCount++;
        }


        if (upperCount == w.size()) return true;
        
        if (upperCount == 0) return true;
        
        if (upperCount == 1 && w[0] >= 'A' && w[0] <= 'Z') return true;

        return false;
    }
};