#include <bits/stdc++.h>
using namespace std;
int tc;
int x,y;
int main() {
ios_base::sync_with_stdio(),cin.tie(0),cout.tie(0);


    string s;
    int tn=1;
    while(cin>>s) {
        int n, r, w, c;
        cin>>n;
        printf("Case %d:\n", tn++);
        for(int i=1; i<=n; i++) {
            cin>>r>>w;
            c=0;
            for(int i=min(r, w); i<max(r, w); i++) {
                if(s[i]==s[i+1])
                    continue;
                else {
                    c=1;
                    break;
                }
            }
            if(c==0) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;

}
/*
 *
 *
 *  set<char>c;
    string s;
    int Case=1;
    while (cin>>s){
        c.clear();

        tc=0;
        cin>>tc;

        cout << "Case "
             << Case++
             << ":"
             << endl;

        while (tc--) {

            c.clear();
            cin >> x >> y;

            if(x==y){
                c.insert(s[y]);

            }


            else{
            for (int i = min(x, y); i <= max(x, y); i++) {
                c.insert(s[i]);
            }}

            if (c.size() == 1) {
                cout << "YES"<<"\n";
            } else {
                cout << "NO"<<"\n";
            }
        }

    }return 0;

}

 * */