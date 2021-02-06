#include <iostream>

using namespace std;

int main()
{
    int index=0,step,mod;
    while (cin>>step>>mod){
        bool vis[mod]={0};
        bool bad=false;
        for(int i=0;i<mod;++i){
            int gen=(index+step)%mod;
            if(vis[gen]==1){
                bad=true;
                break;
            }
            vis[gen]=1;
            index=gen;
        }
        cout<<"          "<<step<<"          "<<mod<<"     ";
        bad?cout<<"Bad Choice\n\n":cout<<"Good Choice\n\n";
    }

    return 0;
}
