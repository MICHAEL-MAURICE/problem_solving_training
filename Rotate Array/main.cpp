#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums, int k) {
    k=k%nums.size();
    vector<int>::iterator it=nums.begin()+k;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), it);
    reverse(it, nums.end());

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
