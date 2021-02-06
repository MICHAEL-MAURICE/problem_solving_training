#include<bits/stdc++.h>
using namespace std;
int main(){
int x[4]={8,4,2,6};int n;
cin>>n;
n==0?cout<<1:cout<<x[(n-1)%4];
}
