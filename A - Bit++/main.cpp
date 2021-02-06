#include <bits/stdc++.h>
#define endl "\n";
using namespace std;
int n,c;
string s;
int main() {

ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
cin>>n;
while (n--){
    cin>>s;
    if(s[1]=='+'){
        c++;
    }
    else
        c--;
}
cout<<c<<endl;
    return 0;
}
