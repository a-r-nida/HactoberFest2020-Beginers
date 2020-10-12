#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
	if (n == 0) {
		return;
	}

	towerOfHanoi(n - 1, source, destination, auxiliary);

	cout << source << " " << destination << endl;

	towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	return 0;
}