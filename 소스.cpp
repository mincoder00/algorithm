#include <iostream>
#include <string>
using namespace std;

int factorial(int n) {
	if (n==0|| n == 1) return 1; // base case
	return n * factorial(n - 1); // recursive case
}


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	int cnt = 0;
	cin >> n;
	int num = factorial(n);
	string number = to_string(num);
	int len = number.length();
	for (int i = 0; i < len; i++) {
		if (number[len - i - 1] == '0') cnt++;
		else {
			cout << cnt<< endl;
			break;
		}
	}



	return 0;
}