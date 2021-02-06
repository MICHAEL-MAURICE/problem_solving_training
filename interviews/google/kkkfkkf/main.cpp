#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    string s;
    cin>>s;
    for(int i=0;i<4;i++)
        ++arr[s[i]-'a'];
        for(int i=0;i<4;i++)
            cout<<arr[i]<<endl;
    return 0;
}
