#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c,b,th=0,fi=0,se=0;
    cin>>c;
    while(c--){
            th=0;fi=0;se=0;
        cin>>b;
        if(b%3==0){
            th=b/3;
            cout<<th;
            continue;
        }
        else if(b%5==0){
            fi=b/5;
            cout<<fi;
            continue;
        }
        else if(b%7==0){
            se=b/7;
            cout<<se;
            continue;
        }
        else if(b%3!=0){
            th++;
        }
        else if(b%5!=0){
            fi++;
        }
        else if(b%7!=0){
            se++;
        }
        cout<<th<<" "<<fi<<" "<<se;

    }
    return 0;
}
