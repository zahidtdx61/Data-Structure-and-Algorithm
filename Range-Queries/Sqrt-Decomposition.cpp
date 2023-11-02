// sqrt decomposition to calculate some on a range
// Complexity (q*O(sqrt(n)))

#include <bits/stdc++.h>
using namespace std;

#define	ll	long long

vector<int> block;

void build_sqrt(vector<int> &arr) {
	int n = (int)arr.size();
	int len = ceil(sqrt(1.0 * n));

	block.clear(); block.resize(len, 0);
	for (int i = 0; i < n; i++) {
		block[i / len] += arr[i];
	}
}

int query(vector<int> &arr, int l, int r) {
	int sum = 0;
	int i = l, len = (int)block.size();

	while (i <= r) {
		if ((i % len == 0) && (i + len - 1 <= r)) {
			sum += block[i / len];
			i += len;
		} else {
			sum += arr[i];
			i++;
		}
	}

	return sum;
}

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> arr(n);

	for (auto &i : arr) cin >> i;

	build_sqrt(arr);
	while (q--) {
		int l, r;
		cin >> l >> r;
		cout << query(arr, l, r) << "\n";
	}

	return 0;
}
