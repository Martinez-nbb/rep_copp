#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<int>> g;
int main() {
	int n, m, s;
	cin >> n >> m >> s;
	--s;
	g.assign(n, {});
	for (int i = 0; i < m; ++i) {
		int v, u;
		cin >> v >> u;
		--v, --u;
		g[v].push_back(u);
		g[u].push_back(v);
	}
        queue<int> q;
	vector<char> used(n);
	vector<int> d(n, 1e9);
	d[s] = 0;
	used[s] = true;
	q.push(s);
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int u : g[v]) {
			if (used[u]) continue;
			d[u] = d[v] + 1;
			used[u] = true;
			q.push(u);
		}
	}
}
