#include <bits/stdc++.h>

using namespace std;
//lower -96
//upper -64
bool isprime(int n){
for(int i=2;i<=n/i;i+=1+(i&1)){

    if(n%i==0){
        return 0;
    }

}
return 1;
}

int main()
{
    char s[21];

    while(scanf("%s",s) == 1){
        int L = strlen(s),n = 0;

        for(int i = 0;i < L;++i)
            n += s[i] >= 'a' && s[i] <= 'z'? s[i] - 'a' + 1 : s[i] - 'A' + 27;

        puts(isprime(n)? "It is a prime word." : "It is not a prime word.");
    }

    return 0;

}
/*

vector<int> p;
string s;
int sum=0;
    while(cin>>s){
            sum=0;
        for(int i=0;i<s.size();i++){
            if(isupper(s[i]))
            sum+=(s[i]-38);
            else sum+=(s[i]-96);

        }
        p.push_back(sum);
    }

    for(int v:p)
        isprime(v)?cout<<"It is a prime word.":cout<<"It is not a prime word.";
    return 0;
*/
