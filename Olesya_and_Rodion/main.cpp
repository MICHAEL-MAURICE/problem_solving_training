#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(n==1&&m==10){
        cout<<-1;
    }
    else{
    if(m!=10){
        cout<<m;
        for(int i=0;i<n-1;i++)
            cout<<0;
    }
    else{
         cout<<m;
        for(int i=0;i<n-2;i++)
            cout<<0;
    }
    }
    return 0;
}
