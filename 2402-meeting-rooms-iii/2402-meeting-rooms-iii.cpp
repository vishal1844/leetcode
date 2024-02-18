class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        priority_queue<int, vector<int>, greater<int>> unused;
    priority_queue<pair<long long int, int>, vector<pair<long long int, int>>, greater<pair<long long int, int>>> used;

    sort(meetings.begin(), meetings.end());

    // Initialize ans vector with 0s
    vector<int> ans(n, 0);

    for (int i = 0; i < n; i++) {
        unused.push(i);
    }

    for (auto& itr : meetings) {
        int start = itr[0];
        int end = itr[1];

        // Pop meetings that have ended before the current meeting starts
        while (!used.empty() && used.top().first <= start) {
            unused.push(used.top().second);
            used.pop();
        }

        if (!unused.empty()) {
            used.push({end, unused.top()});
            ans[unused.top()]++;
            unused.pop();
        } else {
            auto it = used.top();
            long long int k = it.first;
            int l = it.second;
            used.pop();
            used.push({(k + end - start), l});
            ans[l]++;
        }
    }
    return max_element(ans.begin(), ans.end())-ans.begin();
    }
};