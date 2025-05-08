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