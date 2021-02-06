#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int ll;
    cin>>ll;
    while(ll--)
    {
        bool ff=1;
        int nk,qu,ccl=0;
        string s;
        cin>>nk;

        if(nk==1)
            ff=0;
        else
        {

            if((nk-1)%3==0)
            {
                qu=2;

                for(int i=0; i<nk-1; i++)
                {
                    ccl++;

                    qu=qu*10;
                    qu+=3;
                    if(ccl==8)
                    {
                        ccl=0;
                        s+=to_string(qu);
                        qu=0;

                    }

                }

            }
            else
            {
                qu=2;
                for(int i=0; i<nk-2; i++)
                {
                    ccl++;
                    qu=qu*10;
                    qu+=2;
                    if(ccl==8)
                    {
                        ccl=0;
                        s+=to_string(qu);
                        qu=0;

                    }


                }
                qu=qu*10;
                qu+=3;
            }
        }
        if(qu!=0)
            s+=to_string(qu);
        if(ff)
            cout<<s<<"\n";
        else
            cout<<-1<<"\n";
    }

    return 0;
}
