#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int >s;
    s.insert(100);
    s.insert(11);
    s.insert(1);
    auto it=s.begin();
    for(;it!=s.end();it++)
        cout<<*it<<endl;
    return 0;
}
