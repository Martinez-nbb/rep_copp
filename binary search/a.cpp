#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int c = 0;
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
    	cin >> a[i ];
    	c += a[i];
    }
    if (c < k) {
    	cout << 0;
    	return 0;
    }
    int y;
    int m;
    int l = 1, r = *max_element(a.begin(), a.end());		
    while (l <= r) {
    	m = (l + r) / 2;
    	c = 0;
    	for (int i = 0; i < n; ++i) {
    		c += a[i] / m;
    	}
}