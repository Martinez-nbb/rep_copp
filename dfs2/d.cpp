#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int n;
int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
bool in(int x, int y) {
	return 0 <= x && x < n && 0 <= y && y < n;
}
vector<vector<char>> used;
void dfs(int x, int y, char cl) {
	used[x][y] = cl;
	for (int i = 0; i < 8; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (!in(nx, ny) || used[nx][ny]) continue;
		dfs(nx, ny, 3 - cl);
	}
}
int main()
{
	cin >> n;
	used.assign(n, vector<char>(n, 0));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (!used[i][j]) dfs(i, j, 1);
		}
	}
    for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (used[i][j] == 1) cout << "W"; else cout << "B";
		}
		cout << "\n";
	}
}