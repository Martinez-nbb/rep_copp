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
        queue<int> q;
	vector<char> used(n, 0);
	vector<int> d(n, 1e9);
	vector<int> p(n, -1);
	used[v1] = true;
	d[v1] = 0;
	q.push(v1);
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int u = 0; u < n; ++u) {
			if (used[u] || (g[v][u] == '0')) continue;
			d[u] = d[v] + 1;
			used[u] = true;
			p[u] = v;
			q.push(u);
		}
	}
        if (used[v2]) {
		vector<int> pt;
		while (p[v2] != -1) {
			pt.push_back(v2);
			v2 = p[v2];
		}
		pt.push_back(v1);
		reverse(pt.begin(), pt.end());
		cout << pt.size() - 1 << '\n';
		for (int u : pt) cout << u + 1 << ' ';
	}
        else cout << -1;
	cout << '\n';
}
