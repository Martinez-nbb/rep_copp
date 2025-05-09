#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
using namespace std;
vector<vector<char>> g(8, vector<char>(8, 0));
vector<vector<char>> used(8, vector<char>(8, 0));
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, -1, 0, 1 };
bool in(int x, int y) {
	return 0 <= x && x < 8 && 0 <= y && y < 8;
}
void dfs(int x, int y) {
	used[x][y] = 1;
	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (!in(nx, ny) || used[nx][ny]) {
			continue;
		}
		if (g[x][y] == g[nx][ny]) {
			continue;
		}
		dfs(nx, ny);
		
	}
}
int main() {
	string s;
	for (int i = 0; i < 8; ++i) {
		cin >> s;
		for (int j = 0; j < 8; ++j) {
			if (s[j] == 'W') g[i][j] = 1;
		}
	}
    int a = 0;
	for (int i = 0; i < 8; ++i)
		for (int j = 0; j < 8; ++j) {
			if (!used[i][j]) {
				dfs(i, j);
				++a;
			}
		}
	cout << a;
}