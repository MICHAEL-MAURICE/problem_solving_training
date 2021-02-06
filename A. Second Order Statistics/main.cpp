#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int>s;
    int n,k;cin>>n;
    for(int i=0;i<n;i++){
            cin>>k;
          s.insert(k);

    }
    if(s.size()<2)cout<<"NO";
    else{
        cout<<*(++s.begin());
    }

    return 0;
}
