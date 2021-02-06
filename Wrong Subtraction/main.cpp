#include <iostream>
#define endl "\n";
using namespace std;

int n,k;
int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
   cin>>n>>k;


   while (k--){
       (n%10)?n--:n/=10;
    }
cout<<n;


    return 0;
}
