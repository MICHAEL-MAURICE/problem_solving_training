#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;



    pair<int,int> arr[1001];
    cin>>t;
    while(t-- ){
        string r;
    int u=0,R=0;
            bool flag= true;
        cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);
    for(int j=0;j<n;j++){

        if(R<arr[j].first){
                r+=string(arr[j].first-R,'R');

            R+=(arr[j].first-R);


        }

            if(u<arr[j].second){
                    r+=string(arr[j].second-u,'U');
                u+=(arr[j].second-u);



            }
            if(arr[j].second < u || arr[j].first < R)
                flag = false;


        }
         if(flag){
                cout<<"YES"<<endl<<r<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

    }












    return 0;
}
