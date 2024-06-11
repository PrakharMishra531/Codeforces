#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;

		vector<string> grid(n);
		for (int i = 0; i < n; ++i) {
			cin >> grid[i];
		}

		int xmin = INT_MAX;
		int xmax = INT_MIN;
		int ymin = INT_MAX;
		int ymax = INT_MIN;

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (grid[i][j] == '#') {
					xmin = min(xmin, i);
					xmax = max(xmax, i);
					ymin = min(ymin, j);
					ymax = max(ymax, j);
				}
			}
		}

		int h = (xmin + xmax) / 2 + 1;
		int k = (ymin + ymax) / 2 + 1;

		cout << h << " " << k << endl;

	}
}