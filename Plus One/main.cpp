#include <bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
    int n=0;
    for(int i=digits.size()-1;i>=0;i--){
        if(digits[i]<9){

            digits[i]+=1;

            return digits;}

        n++;
        digits[i]=0;}


    vector<int>d(digits.size()+1);
    d[0]=1;
    return d;     }

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
