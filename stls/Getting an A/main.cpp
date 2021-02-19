#include<iostream>
#include<algorithm>
int a[100];
using namespace std;
int main(){
    int n,count=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i],sum+=a[i];
    sort(a,a+n);
    int pos=0;
    while(sum<4.5*n){
        sum+=5-a[pos++];
        count++;
    }
    cout<<count;
}