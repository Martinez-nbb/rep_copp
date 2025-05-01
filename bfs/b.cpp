#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<vector<char>> g;
int main() {
	int n, v1, v2;
	cin >> n >> v1 >> v2;
	--v1, --v2;
	g.assign(n, vector<char> (n));
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) {
			cin >> g[i][j];
		}
}
