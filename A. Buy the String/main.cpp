#include <bits/stdc++.h>

using namespace std;
int tc,n,c0,c1,h,n0,n1,res;
int arr[3];
set<int>v;
string s;
int main()
{
    cin>>tc;
    while(tc--){
            res=0;

            n0=0,n1=0;
        cin>>n>>c0>>c1>>h;
        cin>>s;
        arr[0]=c0;
        arr[1]=c1;
        arr[2]=h;
        sort(arr,arr+3);

        for(int i=0;i<s.length();i++){
                if(s[i]=='0'){
                    n0++;
                }
                else
                   n1++;
        }

        res+=c0*n0;
        res+=c1*n1;
        v.insert(res);
        res=0;
        res+=n0*h;
        res+=n*c1;
        v.insert(res);
        res=0;
        res+=n1*h;
        res+=n*c0;
        v.insert(res);
        //sort(v.begin(),v.end());


        cout<<*v.begin()<<endl;
        v.clear();
    }


    return 0;
}
