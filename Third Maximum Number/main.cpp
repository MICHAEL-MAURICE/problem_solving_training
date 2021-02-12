#include <bits/stdc++.h>
using namespace std;
int thirdMax(vector<int>& nums) {

    set<int>s;

    for (int x :nums) {

        s.insert(x);
    }
    int n=3;
    set<int>::iterator it=s.end();
    if(s.size()>2){
        while(n--)
            it--;
    }
    else{
        it--;
    }
    return *it;

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
