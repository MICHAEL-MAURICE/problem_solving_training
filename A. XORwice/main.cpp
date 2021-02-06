#include <iostream>

using namespace std;

int main()
{
    int n;
    long long c,v;
    cin>>n;
    while(n--){
        cin>>c>>v;

        cout<<(v^c)<<endl;
    }
    return 0;
}
