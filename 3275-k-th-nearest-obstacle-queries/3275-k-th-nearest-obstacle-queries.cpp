#include <vector>
#include <set>
#include <cmath>
#include <iterator> // For std::prev

class Solution {
public:
    std::vector<int> resultsArray(std::vector<std::vector<int>>& queries, int k) {
        std::vector<int> ans(queries.size(), -1);
        std::multiset<int> st;
        
        for (int i = 0; i < queries.size(); ++i) {
            int j = std::abs(queries[i][0]) + std::abs(queries[i][1]);
            
            // Insert the current value into the multiset
            st.insert(j);
            
            // Ensure the multiset size is k
            if (st.size() > k) {
                st.erase(std::prev(st.end())); // Remove the largest element
            }
            
            // If the size is at least k, we can assign the k-th smallest value to the answer
            if (st.size() == k) {
                auto itr = std::prev(st.end()); // Get the k-th smallest element
                ans[i] = *itr;
            }
        }
        
        return ans;
    }
};
