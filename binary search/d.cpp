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