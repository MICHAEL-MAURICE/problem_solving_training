#include <iostream>

using namespace std;

int main()
{
   int n,a,b;
   cin>>n;
   while(n--){
    cin>>a>>b;
    if(a<=2){
        cout<<a<<endl;
    }
    else{
    a-=2;

    cout<<(a+b-1)/b +1<<endl;

   }
   }
    return 0;
}
