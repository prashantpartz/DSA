class Solution {
public:
    string multiply(string num1, string num2) {
        // Edge case: if either number is "0", the product is "0"
        if (num1 == "0" || num2 == "0") return "0";

        int n = num1.size(), m = num2.size();
        vector<int> result(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int digit1 = num1[i] - '0';
                int digit2 = num2[j] - '0';
                int product = digit1 * digit2;

                int pos1 = (n - 1 - i) + (m - 1 - j);
                int pos2 = pos1 + 1;

                int sum = product + result[pos1];
                result[pos1] = sum % 10;
                result[pos2] += sum / 10;
            }
        }

        // result[0] is the ones digit, so reverse to get normal reading order
        string s;
        for (int k = result.size() - 1; k >= 0; k--) {
            s += to_string(result[k]);
        }

        // Strip leading zeros (e.g. "056088" -> "56088")
        int start = 0;
        while (start < (int)s.size() - 1 && s[start] == '0') {
            start++;
        }

        return s.substr(start);
    }
};