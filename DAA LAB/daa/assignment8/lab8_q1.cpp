#include <bits/stdc++.h>
using namespace std;

struct Activity {
    int start;
    int end;
};

bool compare(const Activity& a1, const Activity& a2) {
    return a1.end < a2.end;
}

int main() {
    int n;
    cin >> n;

    vector<Activity> activities;
    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        activities.push_back({start, end});
    }

    sort(activities.begin(), activities.end(), compare);

    int time = 0;
    int max_activity = 0;
    for (const Activity& activity : activities) {
        if (activity.start >= time) {
            max_activity++;
            time = activity.end;
        }
    }

    cout << max_activity << endl;

    return 0;
}


//time complexity--O(n)