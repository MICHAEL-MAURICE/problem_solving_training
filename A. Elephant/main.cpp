#include <iostream>

using namespace std;

int main()
{
    int n,c=0;cin>>n;

    while(n!=0)
    {if(n>=5){
        n-=5;
    c++;
    }
    else if(n==4){

        n-=4;
        c++;
    }
    else if(n==3){
        n-=3;
        c++;
    }
    else if(n==2){
        n-=2;
   c++; }
      else if(n==1){
        n-=1;
        c++;
      }  }
      cout<<c;
    return 0;
}
