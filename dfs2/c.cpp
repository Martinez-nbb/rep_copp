
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
vector<vector<int>> g;
vector<int> cl;
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
    }
}    