class Solution {
public:
    string longestPalindrome(string s) {

        int n = s.size();

        if (n == 0)
            return "";

        int start = 0;
        int len = 1;

        for (int i = 0; i < n; i++) {

            // odd length
            int l = i;
            int r = i;

            while (l >= 0 && r < n && s[l] == s[r]) {

                if (r - l + 1 > len) {
                    len = r - l + 1;
                    start = l;
                }

                l--;
                r++;
            }

            // even length
            l = i;
            r = i + 1;

            while (l >= 0 && r < n && s[l] == s[r]) {

                if (r - l + 1 > len) {
                    len = r - l + 1;
                    start = l;
                }

                l--;
                r++;
            }
        }

        return s.substr(start, len);
    }
};