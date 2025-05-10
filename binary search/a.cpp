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
}