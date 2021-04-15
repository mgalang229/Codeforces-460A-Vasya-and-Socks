#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> sequence;
	// store the numbers from 1 to 'n' in the 'sequence' vector
	for (int i = 1; i <= n; i++) {
		sequence.emplace_back(i);
	}
	for (int i = 0; i < (int) sequence.size(); i++) {
		// check if the current element is divisible by 'm'
		if (sequence[i] % m == 0) {
			// if yes, then increment 'n' and store it in the vector
			sequence.emplace_back(n + 1);
			n++;
		}
	}
	// print the last element in the sequence
	cout << sequence[(int) sequence.size() - 1] << '\n';
	return 0;
}
