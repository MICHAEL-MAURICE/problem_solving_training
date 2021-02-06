#include <iostream>
using namespace std;
const int N=110;
int indexO,indexE,oddC,evenc;
int arr[N];
int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){evenc++;indexE=i;}

        else{oddC++;indexO=i;}

    }
    if (evenc==1)
        cout<<indexE+1;
   else if (oddC==1)
        cout<<indexO+1;

}
