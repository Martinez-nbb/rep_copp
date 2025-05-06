
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
vector<vector<int>> g;
vector<int> cl;
bool dfs(int v, int c) {
	cl[v] = c;
	for (int u : g[v]) {
		if (cl[u] == 0) {
			if (!dfs(u, 3 - c)) return false;
		}
		else if (cl[u] == cl[v]) return false;
	}
	return true;
}
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n, m;
		cin >> n >> m;
		g.assign(n, {});
		cl.assign(n, 0);
		for (int j = 0; j < m; ++j) {
			int v, u;
			cin >> v >> u;
			--v, --u;
			g[v].push_back(u);
			g[u].push_back(v);
		}
        bool f = true;
		for (int j = 0; j < n; ++j) {
			if (!cl[j]) f = f && dfs(j, 1);
		}
        cout << (f ? "YES" : "NO");
		cout << '\n';
    }
}    