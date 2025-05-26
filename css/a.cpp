#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int n;
vector<vector<int>> g;
vector<bool> used;
vector<int>ord;
void dfs(int v) {
	used[v] = true;
	for (int u = 0; u < n; ++u) if (!used[u] && g[v][u]) dfs(u);
	ord.push_back(v);
}
int main() {
	cin >> n;
	g.assign(n, vector<int> (n));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> g[i][j];
		}
	}
    used.assign(n, false);
	for (int i = 0; i < n; ++i) {
		if (!used[i]) {
			dfs(i);
		}
	}
	reverse(ord.begin(), ord.end());