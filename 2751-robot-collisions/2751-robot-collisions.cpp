#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

class Solution {
    static bool comp(vector<int>& a, vector<int>& b) {
        return a[3] < b[3];
    }
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<vector<int>> robots;
        int n = positions.size();

        for (int i = 0; i < n; ++i) {
            robots.push_back({positions[i], healths[i], directions[i], i});
        }

        sort(robots.begin(), robots.end());

        vector<vector<int>> stack;

        for (auto& robot : robots) {
            int pos = robot[0];
            int health = robot[1];
            char dir = robot[2];
            int index = robot[3];

            if (stack.empty() || dir == 'R' || stack.back()[2] == 'L') {
                stack.push_back(robot);
            } else {
                bool flag = true;
                while (!stack.empty() && flag && stack.back()[2] == 'R') {
                    if (stack.back()[1] == health) {
                        flag = false;
                        stack.pop_back();
                    } else if (stack.back()[1] > health) {
                        stack.back()[1]--;
                        flag = false;
                    } else {
                        health--;
                        stack.pop_back();
                    }
                }
                if (flag) {
                    stack.push_back({pos, health, dir, index});
                }
            }
        }

        sort(stack.begin(), stack.end(), comp);

        vector<int> result;
        for (auto& robot : stack) {
            result.push_back(robot[1]);
        }

        return result;
    }
};
