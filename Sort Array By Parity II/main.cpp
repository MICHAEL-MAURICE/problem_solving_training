#include <bits/stdc++.h>
using namespace std;
vector<int> sortArrayByParityII(vector<int>& A) {
    vector<int>e,o,an;
    for(int i=0;i<A.size();i++){
        if(A[i]&1==1){
            o.push_back(A[i]);
        }
        else{
            e.push_back(A[i]);
        }
    }

    for(int i=0;i<A.size()/2;i++){

        an.push_back(e[i]);
        an.push_back(o[i]);

    }
    return an;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
