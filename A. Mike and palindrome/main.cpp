#include <iostream>

using namespace std;

int main()
{
    string s;cin>>s;
    int c=0;
    int j;
    for(int i=0;i<s.length();i++){

        j=(s.length()-1)-i;
            if(s[i]!=s[j])
                c++;
                if(i==j)
                    break;
        }




    if(c==1){
        cout<<"YES";
    }
    else{cout<<"NO";}

    return 0;
}
