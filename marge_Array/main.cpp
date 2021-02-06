#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[3],arr2[4];

    void margesortarray(int arr[],int arr2[]){
vector<int>v;

for(int i=0;i<3;i++){
    v.push_back(arr[i]);
}
for(int i=0;i<4;i++){
    v.push_back(arr2[i]);
}
sort(v,v+6);

for(int it=0,it=v.size();it++)
    cout<<v[it];

    }

    for(int i=0;i<3;i++)
        cin>>arr[i];

    for(int i=0;i<4;i++)
        cin>>arr2[i];

   margesortarray(arr,arr2);

    return 0;
    }
