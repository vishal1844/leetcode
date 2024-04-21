class Solution {
    int a[4] = {-1, 1, 0, 0};
    int b[4] = {0, 0, -1, 1};

    void solve(int i, int j, vector<vector<int>>& land, int& l, int& r) {
        land[i][j] = 0;
        l = max(l, i);
        r = max(r, j);

        for (int p = 0; p < 4; p++) {
            int newi = i + a[p];
            int newj = j + b[p];

            if (newi >= 0 && newj >= 0 && newi < land.size() && newj < land[0].size() && land[newi][newj] == 1) {
                solve(newi, newj, land, l, r);
            }
        }
    }

public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> v;

        for (int i = 0; i < land.size(); i++) {
            for (int j = 0; j < land[0].size(); j++) {
                if (land[i][j] == 1) {
                    int l = i, r = j;
                    solve(i, j, land, l, r);
                    v.push_back({i, j, l , r });
                }
            }
        }

        return v;
    }
};
