#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, d;
	cin >> n >> d;
	vector<int> l(n);
	for (int i = 0; i < n; i++) {
		cin >> l[i];
	}
	// sort the vector in non-decreasing order to get the
	// the minimal difference between two adjacent elements
	sort(l.begin(), l.end());
	int cnt = 0;
	for (int i = 0; i < n - 1; i++) {
		// check if the difference of the next and current element
		// is less than or equal to 'd'
		if (l[i + 1] - l[i] <= d) {
			// if yes, then increment the 'cnt' and index 'i' to skip the next element
			cnt++;
			i++;
		}
	}
	cout << cnt << '\n';
	return 0;
}
