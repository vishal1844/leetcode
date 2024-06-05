class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> v;
        int i, j, k, l;
        vector<int> vec(26, 0);

        // Count frequency of each character in the first word
        for (auto itr : words[0]) {
            vec[itr - 'a']++;
        }

        // Compare with the frequency of characters in the other words
        for (i = 0; i < 26; i++) {
            k = vec[i];
            for (j = 1; j < words.size(); j++) {
                l = 0;
                for (auto itr : words[j]) {
                    if ((itr - 'a') == i) {
                        l++;
                    }
                }
                k = min(l, k);  // Update k to the minimum frequency found
                if (k == 0) {
                    break;  // If k becomes 0, break out of the loop early
                }
            }
            while (k--) {
                v.push_back(string(1, 'a' + i));  // Convert char back to string
            }
        }
        return v;
    }
};
