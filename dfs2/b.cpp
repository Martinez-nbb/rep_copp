#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
vector<vector<int>> g;
vector<int> d, p;
int main() {
	int n;
	cin >> n;
	g.assign(n, {});
	for (int i = 0; i < n - 1; ++i) {
		int v, u;
		cin >> v >> u;
		--v, --u;
		g[v].push_back(u);
		g[u].push_back(v);
	}
}