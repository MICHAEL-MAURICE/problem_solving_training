#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    if (strs.size() == 0) return "";
    string ans = "";
    for (int i = 0; i < strs[0].length(); i++) {
        // checking if character i qualifies to be in the answer.
        bool isQualified = true;
        for (int j = 1; j < strs.size(); j++) {
            if (i >= strs[j].length() || strs[j][i] != strs[0][i]) {
                isQualified = false;
                break;
            }
        }
        if (!isQualified) break;
        ans.push_back(strs[0][i]);
    }
    return ans;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
