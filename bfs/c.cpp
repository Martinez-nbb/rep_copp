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
}
