class Solution {
public:
    bool compare(vector<int> b, vector<int> a) {
        if (a[0] <=b[0] && a[1] <= b[1] && a[2] <= b[2]) {
            return true;
        } else {
            return false;
        }
    }

    int solveTab(int n, vector<vector<int>>& a) {
        vector<int> currRow(n + 1, 0);
        vector<int> nextRow(n + 1, 0);

        for (int curr = n - 1; curr >= 0; curr--) {
            for (int prev = curr - 1; prev >= -1; prev--) {
                int take = 0;
                if (prev == -1 || compare(a[curr], a[prev])) {
                    take = a[curr][2] + nextRow[curr + 1];
                }

                int notake = 0+nextRow[prev + 1];
                currRow[prev + 1] = max(take, notake);
            }
            nextRow = currRow;
        }
        return nextRow[0];
    }

    int maxHeight(vector<vector<int>>& cuboids) {
        for (auto& a : cuboids) {
            sort(a.begin(), a.end());
        }
        sort(cuboids.begin(), cuboids.end());
        return solveTab(cuboids.size(), cuboids);
    }
};
