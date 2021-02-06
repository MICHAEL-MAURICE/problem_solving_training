#include <bits/stdc++.h>
using namespace std;

int fun(int x){
    cout<<x<<"\n";
    if(x==1)return 1;

    return fun(x-1);

}
int fact(int n){
    if(n==0)return 1;
    return n*fact(n-1);
}
int febo(int x){
    if (x==1)
        return 0;
    if(x==2)
        return 1;
    return febo(x-1)+febo(x-2);
}
int arr[15];
vector<int>v;
void solve(int indx){
    if (v.size()==6){
        //print
        return;
    }
    if(indx>6)return;

    else{
        v.push_back(arr[indx]);
        solve(indx++);
        v.pop_back();
        solve(indx++);


    }
}

int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int k;cin>>k;
    for(int i=0;i<k;i++)cin>>arr[i];





    return 0;
}
