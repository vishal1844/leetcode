class Solution {
public:
    string compressedString(string word) {
      std::stack<char> st;
    std::string s;
    
    for (char itr : word) {
        if (!st.empty() && st.top() != itr) {
            s += (st.size() + '0'); // Convert the size to a character
            s += st.top();
            while (!st.empty()) st.pop();
        }
        if (st.size() == 9) {
            s += '9';
            s += st.top();
            while (!st.empty()) st.pop();
        }
        st.push(itr);
    }
    
    if (!st.empty()) {
        s += (st.size() + '0'); // Convert the size to a character
        s += st.top();
    }
    
    return s;
    }
};