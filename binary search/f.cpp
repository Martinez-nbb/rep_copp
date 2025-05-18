#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	int l, n;
	cin >> n >> l;
    vector<double> a(n, 0);
	for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
	double y, r = max(a[0], l - a[n - 1]);
}