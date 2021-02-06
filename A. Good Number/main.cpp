#include <bits/stdc++.h>

using namespace std;
//48
int main()
{
    int k,j,c=0,coun=0;
    cin>>k>>j;
    string s;
    bool fo;

    for(int i=0;i<k;i++){
        cin>>s;
           fo=1;
         for(int q=0;q<=j;q++){
            if(s.find('0'+q)==-1){
                fo=0;

            }
         }
         if(fo){
            ++coun;
         }
    }

    cout<<coun;



    return 0;
}
