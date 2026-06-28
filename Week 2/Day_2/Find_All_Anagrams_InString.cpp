class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (s.size() < p.size())
            return ans;

        int freqP[26] = {0};
        int freqS[26] = {0};

        // Frequency of p
        for (char ch : p)
            freqP[ch - 'a']++;

        int k = p.size();

        // First window
        for (int i = 0; i < k; i++)
            freqS[s[i] - 'a']++;

        if (equal(freqP, freqP + 26, freqS))
            ans.push_back(0);

        // Sliding window
        for (int i = k; i < s.size(); i++) {

            freqS[s[i] - 'a']++;       // Add new character
            freqS[s[i - k] - 'a']--;   // Remove old character

            if (equal(freqP, freqP + 26, freqS))
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};