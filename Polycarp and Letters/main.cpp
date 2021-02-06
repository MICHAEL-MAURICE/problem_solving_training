#include <bits/stdc++.h>
#define endl "\n";
using namespace std;
set<char>s;
char c;
int n,ans=0;
int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n;
    while (n--){
        cin>>c;
        if (islower(c))
            s.insert(c), ans=max(ans, (int)s.size());
            else s.clear();

    }
        cout << ans;
    return 0;
}
