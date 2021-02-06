#include <bits/stdc++.h>

using namespace std;

int main()

{
    int j=1;


    map<int,int>mapp;
    vector<int>v;

    int arr[4]={2,1,3,4};
//    curr=arr[i];

    for(int i=0;i<4;i++){
        if(!mapp[arr[i]])
            mapp[arr[i]]=j;
        else{
             mapp[arr[i]]=j+1;
             v.push_back(arr[i]);


        }



    }

if (*max_element(v.begin(), v.end()) ){
    cout<<*max_element(v.begin(), v.end());
}
else{
    cout<<v[0];
}
    return 0;
}
