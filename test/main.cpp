#include <bits/stdc++.h>

using namespace std;

// [y][x]
bool taken[505][505];

int main()
{
    int W, H, N;
    while (cin >> W >> H >> N)
    {
        while (N--)
        {
            int X1, Y1, X2, Y2;
            cin >> X1 >> Y1 >> X2 >> Y2;
            if (X1 > X2)
                swap(X1, X2);
            if (Y1 > Y2)
                swap(Y1, Y2);
            for (int y = Y1 - 1; y < Y2; ++y)
                for (int x = X1 - 1; x < X2; ++x)
                    taken[y][x] = true;
        }
        int count = 0;

        for (int y = 0; y < H; ++y)
        {
            for (int x = 0; x < W; ++x)
            {
                if (!taken[y][x])
                    ++count;
                else
                    taken[y][x] = false;
            }
        }
        if (count == 0)
            cout << "There is no empty spots.\n";
        else if (count == 1)
            cout << "There is one empty spot.\n";
        else
            cout << "There are " << count << " empty spots.\n";
    }


}
/*
(q1)
int num,f,l;
    scanf("%d",&num);
    while(num--){
        scanf("%d%d",&f,&l);
        printf("%d",abs(f+l));
    }

    (q2)

     int t,a,b,c;
   scanf("%d",&t);
   while(t--){
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",max(max(a,b),c));
    }


    (q3)

    int t,a,b,sum=0;
    scanf("%d",&a);
    while(a--){
   scanf("%d",&t);
   int arr[t][t];
   for(int i=0;i<t;i++){
    for(int j=0;j<t;j++){
        cin>>arr[i][j];
        if(sqrt(arr[i][j])==floor(sqrt(arr[i][j]))){
            sum+=arr[i][j];
        }
    }
   }
   cout<<sum<<endl;
   sum=0;
    }

    (q4)

    map<char,int>ma;
int v,b;cin>>v;
char c;
while(v--){
    cin>>b;
    while(b--){
           cin>>c;
        ++ma[c];
    }

    auto it = ma.begin();
    int m=it->second;
     char q, k=it->first;

    for (it = ma.begin();
         it != ma.end(); ++it) {
             if(it->second>m){
                k=it->first;
             }
m=max(m,it->second);

}

         cout<<k;
}

(q5)



char a[1000][1000];
    int n,y,z;
    cin>>n;
    int x=n/2;
    y=x-1;
    z=x+1;

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            a[i][j]='*';
        }
    }

    while (x>0)
    {
        while(x!=n-y-1)
        {
            a[y][x]=' ';
            a[z][x]=' ';
            x++;
        }


        x=y;
        y=x-1;
        z++;

    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n";


(q6)

int sum(int arr[],int n){

 if(n<=0)
    return 0;

 return(sum(arr,n-1)+arr[n-1]);

 }

int main()
{

    int num,c=1;cin>>num;
    while(num--){

        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Case "<<c<<": "<<sum(arr,n)<<endl;
c++;

    }


    (Q7)
    int n,f,l,m,sum=0;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
sort(arr,arr+n);
f=0,l=n-1;

while(f<l){
    sum=arr[f]+arr[l];
    if(sum>m){
        l--;
    }
    else if(sum<m){
        f++;
    }
    else{
        cout<<"peter should buy books whose prices are"<<" "<<arr[f]<<" "<<"and"<<" "<<arr[l];
        break;
    }

}

(Q8)

const int N=100000;
pair<int,int> v[N];
int main()
{
    int n,d,j=0;

    long long smax=-1,sc=0;
    cin>>n>>d;

    for(int i=0;i<n;i++)
       cin>>v[i].first>>v[i].second;
    sort(v,v+n);
    for(int i=0;i<=n;i++)

       {

       sc+=v[i].second;

       while(j<=i&&v[i].first-v[j].first>=d)
       {

       sc-=v[j].second;
       j++;
          }

       smax=max(smax,sc);

              }


    cout<<smax;

    return 0;

(q9)
 int c=1,m=1;
    while (true){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>0){
                m*=arr[i];
            }

        }
        if(m==1){
            cout<<"Case #"<<c<<": The maximum product is "<<0<<endl;
            c++;
        }
        else{
            cout<<"Case #"<<c<<": The maximum product is "<<m<<endl;
            c++;
            m=1;

        }

    }

    return 0;


*/
