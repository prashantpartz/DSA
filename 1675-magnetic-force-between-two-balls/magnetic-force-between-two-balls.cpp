class Solution {
public:
    bool isPossible(const vector<int>& position, int m, int minDist) {
        int cows = 1;
        int lastPos = position[0];
        
        for (int i = 1; i < (int)position.size(); i++) {
            if (position[i] - lastPos >= minDist) {
                if (++cows == m) return true;
                lastPos = position[i];
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        
        int lo = 1;
        int hi = (position.back() - position.front()) / (m - 1);
        int ans = 0;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (isPossible(position, m, mid)) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return ans;
    }
};