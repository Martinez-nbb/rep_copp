#include <iostream>
#include <vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	vector<int> a;
    for (int i = 0; i < t; ++i) {
		int n, c, m = 0;
		cin >> n;
		a.assign(n, 0);
        for (int j = 0; j < n; ++j) {
			cin >> a[j];	
		}
		for (int j = 1; j < n; ++j) {
			c = min(a[j], a[j - 1]) ;
			m = max(c, m);
        }
        for (int j = 2; j < n; ++j) {
			int x = a[j];
			int y = a[j - 1];
			int z = a[j - 2];
			m = max(c, m);
            c = x + y + z - max(x, max(y, z)) - min(x, min(y, z));
		 }
		 cout << m << '\n';
	}
}