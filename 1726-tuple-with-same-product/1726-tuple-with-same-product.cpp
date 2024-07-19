#include <vector>
#include <unordered_map>

class Solution {
public:
    int tupleSameProduct(std::vector<int>& nums) {
        std::unordered_map<int, int> productCount;
        int result = 0;
        
        // Iterate through all pairs (i, j) with i < j
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                int product = nums[i] * nums[j];
                // Increment the count of this product in the map
                productCount[product]++;
            }
        }
        
        // Calculate the number of tuples from the product counts
        for (const auto& entry : productCount) {
            int count = entry.second;
            if (count > 1) {
                // If there are n pairs with the same product,
                // the number of tuples (a, b, c, d) is 8 * C(n, 2)
                // where C(n, 2) is the number of ways to choose 2 pairs from n pairs
                result += count * (count - 1) / 2 * 8;
            }
        }
        
        return result;
    }
};
