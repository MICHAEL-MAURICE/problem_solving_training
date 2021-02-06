#include <bits/stdc++.h>
using namespace std;

/*
input
2
6 5
PST#T
BTJAS
TYCVM
YEHOF
XIBKU
N@RJB
5 4
JA#X
JVBN
XOHD
DQEM
T@IY

*/


int dx[] = { -1, 0, 0 };
int dy[] = { 0, 1, -1 };
string dir[] = { "forth", "right", "left" };
string path = "IEHOVA#";
int n, m;
char a[9][9];
bool valid(int i, int j) { return i >= 0 && i < n && j >= 0 && j < m; }
vector<string> res;

void dfs(int i, int j, int idx) {
	if (idx > path.size()) return;
	for (int k = 0; k < 3; k++) {
		int toX = i + dx[k];
		int toY = j + dy[k];
		if (valid(toX, toY) && a[toX][toY] == path[idx]) {
			res.push_back(dir[k]);
			dfs(toX, toY, idx + 1);
		}
	}
}

int main() {


	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		pair<int, int> st;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
				if (a[i][j] == '@')
					st = { i, j };
			}
		}
		res.clear();
		dfs(st.first, st.second, 0);
		cout << res[0];
		for (int i = 1; i < res.size(); i++)
			cout << " " << res[i];
		cout << endl;
	}

	return 0;
}
