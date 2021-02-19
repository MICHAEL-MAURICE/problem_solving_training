#include<bits/stdc++.h>
using namespace std;
int countinv(int x, int y) {
    int c = 0;
    for (int i = 0; i < 4; ++i) {
        if (x % 10 != y % 10) c++;
        x /= 10, y /= 10;
    }
    return c;
}
int main()
{
    int n; cin >> n;
    vector<int>v(n);
    for (int& i : v) cin >> i;
    int prev = 1000;
    for (int i = 0; i < n; ++i) {
        bool ok = 0;
        for(int j = prev ; j <= 2011 ; ++j)
            if (countinv(j, v[i]) <= 1) { ok = 1; v[i] = j; break; }
        if (!ok) return cout << "No solution", 0;
        prev = v[i];
    }
    for (int i : v) cout << i << "\n";
    return 0;
}