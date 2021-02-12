#include <bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& A) {
    vector<int >v;
    if(A.size()==0)return v;
    int rowbegin=0;
    int rowend=A.size()-1;
    int columnbe=0;
    int columnen=A[0].size()-1;
    while(rowbegin<=rowend&&columnbe<=columnen){

        for(int i=rowbegin;i<=columnen;i++){
            v.push_back(A[rowbegin][i]);
        }
        rowbegin++;
        for(int i=rowbegin;i<=rowend;i++){
            v.push_back(A[i][columnen]);
        }
        columnen--;
        if(rowbegin<=rowend){

            for(int i=columnen;i>=columnbe;i--){
                v.push_back(A[rowend][i]);
            }
        }
        rowend--;
        if(columnbe<=columnen){
            for(int i=rowend;i>=rowbegin;i--){
                v.push_back(A[i][columnbe]);
            }
        }
        columnbe++;
    }
    return v;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
