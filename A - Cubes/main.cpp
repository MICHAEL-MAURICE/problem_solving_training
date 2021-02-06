#include <bits/stdc++.h>

using namespace std;

int bSearch(long long* ary, int nd, long long target){
    int st= 0, mid;

    while(st<=nd){
        mid = st + (nd-st)/2;
        if(ary[mid] == target) return mid;

        if(target > ary[mid]) st= mid+1;
        else nd = mid-1;
    }

    return -1;
}

void solve(void)
{
    int n, a, b;

    long long cubes[1020];
    for(int i= 0; i<1001; i++){
        cubes[i] = i*i*i;
    }
    bool notFound= true;

    while(scanf("%d", &n) && n != 0)
    {
        notFound= true;
        for(int i= 1; i<= 1000; i++){
            if(cubes[i] - n > 0)
            {
                int tempy = bSearch(cubes, 1001, cubes[i] - n);
                if(tempy != -1){
                    //DD(cubes[i])
                    notFound= false;

                    cout<< i << " " << tempy <<endl;
                    break;
                }
            }

        }

        if(notFound) cout<< "No solution"<<endl;

    }

}


int main(void)
{



    solve();

    return 0;
}
