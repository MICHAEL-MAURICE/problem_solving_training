#include<bits/stdc++.h>

using namespace std;
const int N = 1e5 + 2, M = 200;
int a[N];

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i && a[i] < a[i - 1]) ans += a[i - 1] - a[i];
    }
    cout << ans;
    return 0;
}