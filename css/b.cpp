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