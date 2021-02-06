#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,eng=0,dol=0,com=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    eng=0;
    dol=arr[0];
    for(int i=0;i<n-1;i++){
              if(arr[i]>=arr[i+1]){
        eng+=abs(arr[i]-arr[i+1]);
    }
    else{
        if(eng>=abs(arr[i]-arr[i+1]))
            eng-=abs(arr[i]-arr[i+1]);
        else{
             dol+=abs(arr[i]-arr[i+1])-eng;
             eng=0;
        }
    }




    }
    cout<<dol;

    return 0;
}
