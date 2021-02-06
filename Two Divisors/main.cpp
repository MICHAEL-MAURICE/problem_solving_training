#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int NN=1e7+3;
int factors[NN];
void sieve(){
    iota(factors,factors+NN,0);
    factors[1]=-1;
    for(int i=2;i<NN/i;i+=1+(i&1)){
        if(factors[i]==i)
            for(int j=i*i;j<NN;j+=i)
            if(factors[j]==j)factors[j]=i;}}


            vector<int>factorize(int v){

            vector <int> ret;
            while(v>1){
                int p=factors[v];
                int cur=1;
                while(factors[v]==p){

                    v/=factors[v];
                    cur*=p;

                }
                ret.push_back(cur);
            }
            return ret;

            }
pair<int,int>ans[NN];
int main()
{
    sieve();
    int n,v,i;
    scanf("%d",&n);
    for( i=0;i<n;i++){
        scanf("%d",&v);
        int second=v;
        int f=factors[v];
        int first=1;
        while(factors[v]==f){
            first *=f;
            v/=factors[v];
        }

         second/=first;

        if(second==1)
            ans[i]={-1,-1};



        else
        ans[i]={first,second};
    }

     for(int i=0;i<n;i++)
        cout<<ans[i].first<<" ";

        cout<<endl;
     for(int i=0;i<n;i++)
        cout<<ans[i].second<<" ";
    return 0;
}











/*


solutio 1
sieve();
    int n,v,i;
    scanf("%d",&n);
    for( i=0;i<n;i++){
        scanf("%d",&v);
        auto ret=factorize(v);

        if(ret.size()>1)
            ans[i]={ret[0],v/ret[0]};


        else
        ans[i]={-1,-1};
    }

     for(int i=0;i<n;i++)
        cout<<ans[i].first<<" ";

        cout<<endl;
     for(int i=0;i<n;i++)
        cout<<ans[i].second<<" ";
    return 0;






*/
