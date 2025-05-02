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
}
