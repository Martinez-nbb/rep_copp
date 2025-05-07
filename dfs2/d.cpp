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
