#include <iostream>
using namespace std;
void solve(string s) {
    int cp = 0, dp = 1;
    int out[10] = {0};
    while (0 <= cp && cp < s.length()) {
        bool del = false;
        if ('0' <= s[cp] && s[cp] <= '9') {
            out[s[cp]-'0']++;
            s[cp]--;
            if (s[cp] < '0')
                del = true;
        } else {
            if (s[cp] == '<')
                dp = -1;
            else
                dp = 1;
            if (cp+dp >= 0 && cp+dp < s.length() && (s[cp+dp] == '<' || s[cp+dp] == '>'))
                del = true;
        }
        if (del) {
            s.erase(cp, 1);
            if (dp == -1)
                cp--;
        } else cp += dp;
    }
    for (int i = 0; i < 10; i++)
        cout << out[i] << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n, q;
    string s;
    cin >> n >> q;
    cin >> s;
    while (q--) {
        int l, r;
        cin >> l >> r;
        solve(s.substr(l-1, r-l+1));
    }
    return 0;
}
