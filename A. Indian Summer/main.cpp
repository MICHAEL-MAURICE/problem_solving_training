#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string>se;
    int n,c=0;scanf("%d",&n);
    n++;
    while(n--){
        string s;getline(cin,s);
        se.insert(s);
    }

    /*auto it=se.begin();
    for(;it!=se.end();it++){
         c++;

    }*/
    cout<<se.size()-1;



    return 0;
}
