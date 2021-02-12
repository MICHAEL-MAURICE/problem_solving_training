#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char>& s) {
    for(int i = 0; i < s.size()/2; i++) swap(s[i], s[s.size()-1-i]);
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
