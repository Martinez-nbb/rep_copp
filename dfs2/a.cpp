#include <iostream
#include <vector>
using namespace std;
vector<vector<int>> g;
vector<int> tin, tout;
int T;
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
}
