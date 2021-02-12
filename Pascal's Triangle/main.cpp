#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ret;
    ret.reserve( numRows );
    for (int n=0; n<numRows; n++) {
        vector<int> row = {1};              // n choose 0
        row.reserve( n+1 );
        for (int k=1; k<=n; k++) {
            row.push_back( row.back() * (n + 1 - k)/k );
        }
        ret.push_back(row);
    }
    return ret;

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
