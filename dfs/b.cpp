
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> g;
vector<char> used;
int main() {
    int n, m;
    cin >> n >> m;
    g.assign(n, {});
    for (int i = 0; i < m; ++i) {
        int v, u;
        cin >> v >> u;
        --v, --u;
        g[v].push_back(u);
        g[u].push_back(v);
    }
}
