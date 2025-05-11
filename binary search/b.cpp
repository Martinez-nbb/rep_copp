
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main() {
     int t;
     cin >> t;
     for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        int l = 1;
     	long long  r = 3*1e9;
     	long long m, y;
     	while (l <= r) {
     		m = l + (r - l) / 2;
     		if (m -  m / n >= k) {
     			r = m - 1;
     			y = m;
     		}
     		else l = m + 1;
     	}
         cout << y << '\n';
    }
    	
}