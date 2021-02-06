#include <iostream>

using namespace std;

int main()
{
    int n,c;
    scanf("%d",&n);
    while(n--){
           scanf("%d",&c);
        (c%400==0||(c%4==0&&c%100!=0))?cout<<"February 29"<<endl:cout<<"March 1"<<endl;

    }
    return 0;
}
