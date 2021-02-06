#include <iostream>

using namespace std;

int main()
{
    int n,k,d=0;cin>>n>>k;
    string s;

    for(int i=0;i<n;i++){
        cin>>s;
        int c=0;
        for(int j=0;j<s.length();j++){
            if(s[j]=='4'||s[j]=='7'){
                c++;
            }
        }
        if(c<=k){
            d++;

        }
    }
    cout<<d;
    return 0;
}
