class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};

        // Count characters in magazine
        for (char ch : magazine) {
            freq[ch - 'a']++;
        }

        // Check ransomNote
        for (char ch : ransomNote) {
            if (freq[ch - 'a'] == 0)
                return false;

            freq[ch - 'a']--;
        }

        return true;
    }
};