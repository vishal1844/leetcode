#include <vector>
#include <algorithm>

class Solution {
    bool solve(std::vector<int>& position, int m, int mid) {
        int count = 1; // Placing the first item
        int last_position = position[0]; // The position of the last placed item

        for (int i = 1; i < position.size(); i++) {
            if (position[i] - last_position >= mid) {
                count++;
                last_position = position[i];
            }
            if (count >= m) return true;
        }
        return false;
    }

public:
    int maxDistance(std::vector<int>& position, int m) {
        std::sort(position.begin(), position.end());
        int left = 1; // Minimum possible distance
        int right = position.back() - position.front(); // Maximum possible distance
        int result = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (solve(position, m, mid)) {
                result = mid;
                left = mid + 1; // Try for a larger minimum distance
            } else {
                right = mid - 1; // Try for a smaller minimum distance
            }
        }
        return result;
    }
};
