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
}
