#include <iostream>
//#define all(v)     ((int)(V.begin(),v.end()))
#define sz(v)      ((int)(v.size()))
using namespace std;

int main()
{
    int arr[3];
    for(int i=0;i<3;i++)
        cin>>arr[i];

    cout<<sz(arr);
    return 0;
}
