#include <bits/stdc++.h>
using namespace std;
const int N=8;
char arr[N][N];
set<char>ch;
bool check_all_blacks(){
    if((ch.size()==1)&&(*ch.begin()=='B'))return true;

    return false;
}
int check_Rows(){
int num_of_rows=0;bool check_black;
for(int i=0;i<N;i++){
    check_black=true;
    for(int j=0;j<N;j++){
        if(arr[i][j]!='B')
            check_black=false;



    }
    if(check_black)num_of_rows++;
}
    return num_of_rows;

}
int check_colums(){
    int num_of_Coulms=0;bool check_black;
    for(int i=0;i<N;i++){
        check_black=true;
        for(int j=0;j<N;j++){
            if(arr[j][i]!='B')
                check_black=false;



        }
        if(check_black)num_of_Coulms++;
    }
    return num_of_Coulms;


}

int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
            ch.insert(arr[i][j]);

        }
            if(check_all_blacks())cout<<'8';
        else
           cout<< check_Rows()+check_colums();

    return 0;
}
