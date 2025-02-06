#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    multiset<int> st;
    set<int> s = {0, x};
    st.insert(x - 0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        s.insert(t);

        auto location = s.find(t);
        auto hup = next(location);   // Get the next element correctly

        if (hup != s.end() && location != s.begin()) {
            auto hi = next(location);
            auto lo = prev(location);

            st.erase(st.find(*hi - *lo));  // Remove the old segment
            st.insert(*hi - t);  // Insert new segment
            st.insert(t - *lo);
        }

        cout << *st.rbegin() << ' ';  // Print the largest segment
    }
    return 0;
}