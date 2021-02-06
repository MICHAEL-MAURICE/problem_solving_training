#include <bits/stdc++.h>

using namespace std;
int GCD(int a,int b){
if(a==0)return b;
if(b==0)return a;
return GCD(b,a%b);

}
int main()
{
    /*int n,c=0,k;
    cin>>n;
    while(n--){
            c=0;
        cin>>k;
        int arr[k];
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }
        if(k==1){
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0;i<k-1;i++){
            if(abs(arr[i]-arr[i+1])!=1)
                c++;
        }

         if(abs(arr[0]-arr[k-1])!=1)
                c++;

             if(c>1){
                cout<<"NO"<<endl;
             }   else if(c==1)
             cout<<"YES"<<endl;

    }*/


    int arr[6];
        for(int i=0;i<6;i++){
            cin>>arr[i];
        }
        int t=arr[0];
        for(int i=1;i<6;i++){
            t=GCD(t,arr[i]);

        }

    cout<<t<<endl;
    return 0;
}
