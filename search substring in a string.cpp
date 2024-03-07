#include<bits/stdc++.h>
using namespace std;

void func(int n, int m, string x, string s) {
	for (int i = 0; i < 6; i++) {
		size_t found = x.find(s);
		if (found != string::npos) {
			cout << i << endl;
			return;
		}
		x += x;
	}
	cout << -1 << endl;

}

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
		string x, s;
		cin >> x;
		cin >> s;
		// if (n <= m) {
		// 	while (n <= m) {
		// 		x.append(x);
		// 		n += n;
		// 		cnt++;
		// 	}
		// 	size_t found = x.find(s);
		// 	if (found != string::npos) {
		// 		cout << cnt << endl;
		// 	}
		// 	else {
		// 		cout << -1 << endl;
		// 	}
		// }
		// else {
		// 	size_t found = x.find(s);
		// 	if (found != string::npos) {
		// 		cout << cnt << endl;
		// 	}
		// 	else {
		// 		n = n + n;
		// 		x.append(x);
		// 		cnt++;
		// 		size_t found2 = x.find(s);
		// 		if (found2 != string::npos) {
		// 			cout << cnt << endl;
		// 		}
		// 		else {
		// 			cout << -1 << endl;
		// 		}

		// 	}
		// }
		func(n, m, x, s);



	}
}


