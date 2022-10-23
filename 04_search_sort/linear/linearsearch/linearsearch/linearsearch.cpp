#include <iostream>

using namespace std;

int search(int arr[], int n, int x, int result[]) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			result[cnt++] = i;
		}
	}
	return cnt;
}
int main() {
	const int n = 4;
	int arr[n] = { 1, 2, 3, 3 };
	int result[n];
	int x = 3;
	int cnt = search(arr, n, x, result);
	for (int i = 0; i < cnt; i++) {
		cout << result[i] << endl;
	}
	cout << cnt << endl;
	return 0;
}

