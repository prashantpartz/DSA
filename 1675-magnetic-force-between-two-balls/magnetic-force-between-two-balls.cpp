class Solution {
public:
    bool ispossible(vector<int>& position, int m, int mid) {
        int cows = 1;
        int lastpos = position[0];

        for (int i = 1; i < position.size(); i++) {
            if (position[i] - lastpos >= mid) {
                cows++;
                lastpos = position[i];
            }
            if (cows == m) {
                return true;
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());

        int st = 1;
        int end = position[position.size()-1] - position[0];
        int ans = 0;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (ispossible(position, m, mid)) {
                ans = mid;
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};