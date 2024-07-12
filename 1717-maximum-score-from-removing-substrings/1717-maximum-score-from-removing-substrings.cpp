#include<bits/stdc++.h>
class Solution {
public:
   int maximumGain(std::string s, int x, int y) {
        int totalGain = 0;
        if (x < y) {
            std::swap(x, y);
            string str=s;
            reverse(str.begin(),str.end());
            swap(s, str);
        }

        std::stack<char> st;
        for (char ch : s) {
            if (!st.empty() && st.top() == 'a' && ch == 'b') {
                st.pop();
                totalGain += x;
            } else {
                st.push(ch);
            }
        }

        std::string remainingString;
        while (!st.empty()) {
            remainingString += st.top();
            st.pop();
        }
        std::reverse(remainingString.begin(), remainingString.end());

        for (char ch : remainingString) {
            if (!st.empty() && st.top() == 'b' && ch == 'a') {
                st.pop();
                totalGain += y;
            } else {
                st.push(ch);
            }
        }

        return totalGain;
    }
};