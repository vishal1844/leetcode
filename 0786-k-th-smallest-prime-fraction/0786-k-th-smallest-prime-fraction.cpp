class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
    priority_queue<pair<double, pair<int, int>>> pq;
    int n = arr.size();
    int l = 0, m = n - 1;

    for (int i = 0; i < n; i++) {
        double a = (-1.0*arr[i]) / arr[n - 1];
        pq.push({a, {i, n - 1}});
    }

    while (k--) {
        auto itr = pq.top();
        pq.pop();
        l = itr.second.first;
        m = itr.second.second - 1;
        if (m >= 0) {
            double a =(-1.0*arr[l]) / arr[m];
            pq.push({a, {l, m}});
        }
    }
    return {arr[l], arr[m+1]};
}
};