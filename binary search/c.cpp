#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main() {
     int t;
     cin >> t;
     vector<int> a;
     for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        a.assign(n, 0);
        for (int j = 0; j < n; ++j) cin >> a[j];
     	int l = 1;
     	int  r = 2e9 + 50;
     	int m, y;
     	long long c = 0;
     	while (l <= r) {
     		c = 0;
     		m = l + (r - l) / 2;
     		for (int j = 0; j  < n; ++j) {
     			if (a[j] < m) {
     				c += m - a[j];
     			}
     		}		
     		if (k >= c) {
     			y = m;
     			l = m + 1;
     		}	
     		else r = m - 1;
     	}
        cout << y << '\n';
    }	
}