#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
//vector<int>::iterator it;
int tc,u,mx,index;cin>>tc;
while(tc--){

    cin>>u;
    int arr[u];
    index=0;
    for(int i=0;i<u;i++){
        cin>>arr[i];
        mx=max(0,arr[i]);
    }
for(int i=1;i<u;i++){
    if(arr[i]==arr[0]){
        index=-2;
        goto asd;


    }
}

     for(int i=0;i<u;i++){
        if(arr[i]==mx){
            index=i;
            break;


        }



     }
     asd:
     cout<<index+1<<endl;
     index=0;
}
    return 0;
}
