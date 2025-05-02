#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	int n, x1, y1, x2, y2;
	cin >> n >> x1 >> y1 >> x2 >> y2;
	--x1, --y1, --x2, --y2;
	vector<vector<char>> used(n, vector<char>(n));
	queue<pair<int, int>> q;
	vector<vector<pair<int, int>>> p(n, vector<pair<int, int>>(n, { -1, -1 }));
        vector<vector<int>> d(n, vector<int>(n, 1e9));
	d[x1][y1] = 0;
	q.push({ x1, y1 });
	vector<int> dx = { -2, -1, 1, 2, 2, 1, -1, -2 };
	vector<int> dy = { 1, 2, 2, 1, -1, -2, -2, -1 };
        while (!q.empty()) {
		pair<int, int> v = q.front();
		int x = v.first;
		int y = v.second;
		q.pop();
		for (int i = 0; i < 8; ++i) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if ((!(0 <= nx && nx < n && 0 <= ny && ny < n)) || used[nx][ny]) continue;
			d[nx][ny] = d[x][y] + 1;
			used[nx][ny] = true;
			q.push({ nx, ny });
			p[nx][ny] = { x, y };
		}
	}
}
