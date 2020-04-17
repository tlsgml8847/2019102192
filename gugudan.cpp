#include <iostream>
using namespace std;

int main() {
	
	int i, j;

	for (i = 1; i <= 8; i++) {
		for (j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	return 0;
}