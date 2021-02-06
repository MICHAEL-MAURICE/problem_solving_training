#include <iostream>

using namespace std;

int main()
{
    int c,v,x,count=0;
    cin>>c>>v;
    for(int i=0;i<c;i++){
            cin>>x;
        if(x<=5-v){
            count++;
        }
    }
        cout<<count/3;

    return 0;
}
