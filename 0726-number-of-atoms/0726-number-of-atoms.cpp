class Solution {
public:
    string countOfAtoms(string formula) {
        int runningMul = 1;
        stack<int> stack;
        stack.push(1);
        unordered_map<string, int> finalMap;
        string currAtom = "";
        string currCount = "";
        int index = formula.length() - 1;
        while (index >= 0) {
            if (isdigit(formula[index])) {
                currCount = formula[index] + currCount;
            }
            else if (islower(formula[index])) {
                currAtom = formula[index] + currAtom;
            }
            else if (isupper(formula[index])) {
                currAtom = formula[index] + currAtom;
                int count = currCount.empty() ? 1 : stoi(currCount);
                finalMap[currAtom] += count * runningMul;

                currAtom = "";
                currCount = "";
            }
            else if (formula[index] == ')') {
                int currMultiplier = currCount.empty() ? 1 : stoi(currCount);
                stack.push(currMultiplier);
                runningMul *= currMultiplier;
                currCount = "";
            }
            else if (formula[index] == '(') {
                runningMul /= stack.top();
                stack.pop();
            }

            index--;
        }
        map<string, int> sortedMap(finalMap.begin(), finalMap.end());
        string ans;
        for (auto& [atom, count] : sortedMap) {
            ans += atom;
            if (count > 1) {
                ans += to_string(count);
            }
        }

        return ans;
    }
};