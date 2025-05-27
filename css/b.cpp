#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<vector<int>> g, tg;
vector<char> used;
vector<int> ord;
void ts(int v) {
	used[v] = true;
	for (int u : g[v]) if (!used[u]) ts(u);
	ord.push_back(v);
}
vector<int> clr;
int comp;
void dfs(int v) {
	clr[v] = comp;
	for (int u : tg[v]) if (clr[u] == -1) dfs(u);
}
