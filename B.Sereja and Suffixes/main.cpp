#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,num;cin>>a>>b;
    set<int>s;
    int arr[a];
    for(int i=1;i<=a;i++){
        cin>>arr[i];
    }

    for(int i=a;i>=1;i--){

            s.insert(arr[i]);
            arr[i]=s.size();

    }
    while(b--){
        cin>>num;
        cout<<arr[num]<<endl;

    }

    return 0;
}
