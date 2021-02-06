#include <bits/stdc++.h>

const int N=1e5;
int p[N];
int w[N];
int n,maxw;
int mem[2000][2001];
int solve(int pos,int wight){

if(pos==n)
    return 0;

    int&ret=mem[pos][wight];
    if(~ret) return ret;
    int pick=(wight>=w[pos])?p[pos]+solve(pos+1,wight-w[pos]):0;
    int leave= solve(pos+1,wight);
    return ret = max(pick,leave);


}


using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
