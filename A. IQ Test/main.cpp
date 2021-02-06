
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s [4];
	for (int i = 0; i < 4; ++i) cin >> s [i];

	for (int i = 0; i < 3; ++i)
	for (int j = 0; j < 3; ++j){
		if (s[i][j] + s[i][j + 1] + s [i + 1][j] + s [i + 1][j + 1] != 2 * ('#' + '.')){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
}

