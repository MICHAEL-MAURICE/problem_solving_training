#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin>>s;
    int n,l,m;
    cin>>n;
    int arr[s.size()];
    if(s[0]=='.'){
            arr[0]=1;
        }
        else{
            arr[0]=0;
        }
    for(int i=1;i<s.size();i++){

        arr[i]=arr[i-1]+(s[i]==s[i-1]);


    }
    while(n--){
        cin>>l>>m;


        cout<<arr[m-1]-arr[l-1]<<endl;
    }

    return 0;
}
