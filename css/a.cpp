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