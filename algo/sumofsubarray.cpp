#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

bool can_draw_circle(int x, int y, int r, vector<pair<pair<double,double>,double>> &trees) {
    for (auto &tree : trees) {
        if (distance(x, y, tree.first.first, tree.first.second) < r + tree.second) {
            return false;
        }
    }
    return true;
}

void solve_case(int case_num) {
    int ulx, uly, lrx, lry;
    cin >> ulx >> uly >> lrx >> lry;
    int dx, dy, n;
    cin >> dx >> dy >> n;
    vector<pair<pair<double,double>,double>> trees;
    for (int i = 0; i < n; i++) {
        double xi, yi, ri;
        cin >> xi >> yi >> ri;
        trees.push_back(make_pair(make_pair(xi, yi), ri));
    }

    int max_r = min(dx-ulx, lrx-dx, dy-uly, lry-dy) - 1;
    int count = 0;
    for (int r = 1; r <= max_r; r++) {
        if (can_draw_circle(dx, dy, r, trees)) {
            count++;
        }
    }
    
    cout << "Case " << case_num << ": " << count << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve_case(i);
    }
    return 0;
}
