class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int idx = 0;
        int i = 0;

        while (i < n) {

            char ch = chars[i];
            int cnt = 0;

            while (i < n && chars[i] == ch) {
                cnt++;
                i++;
            }

            chars[idx++] = ch;

            if (cnt > 1) {
                string num = to_string(cnt);

                for (char c : num) {
                    chars[idx++] = c;
                }
            }
        }

        return idx;
    }
};