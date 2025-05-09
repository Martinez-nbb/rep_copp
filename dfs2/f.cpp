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