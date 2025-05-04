#include <iostream
#include <vector>
using namespace std;
vector<vector<int>> g;
vector<int> tin, tout;
int T;
void dfs(int v, int p = -1) {
	tin[v] = T++;
	for (int u : g[v]) if (u != p) {
		dfs(u, v);
	}
	tout[v] = T;
}
bool is_ancestor(int v, int u) {
	return tin[v] <= tin[u] && tout[u] <= tout[v];
}
int main() {
	int n;
	cin >> n;
	g.assign(n, {});
	for (int i = 1; i < n; ++i) {
		int u;
		cin >> u;
		--u;
		g[i].push_back(u);
		g[u].push_back(i);
	}
        T = 0;
	tin.resize(n);
	tout.resize(n);
	dfs(0);
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int v, u;
		cin >> v >> u;
		--v, --u;
		if (is_ancestor(v, u)) cout << 1;
		else if (is_ancestor(u, v)) cout << 2;
		else cout << 3;
		cout << '\n';
	}
}
