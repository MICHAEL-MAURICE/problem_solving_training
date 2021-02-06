#include <iostream>
#define endl "\n";
using namespace std;
const int N=200;
int arr[N];
int c=0,k,n;
int main() {
   ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
cin>>k>>n;
for (int i=0;i<k;i++){
    cin>>arr[i];
}
    for (int i=0;i<k;i++){
        if(arr[i]>=arr[n-1]&&arr[i]>0)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
