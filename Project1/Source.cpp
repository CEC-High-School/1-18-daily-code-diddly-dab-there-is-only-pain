#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	while (true) {
		int number = 0;
		int cube;

		cout << "Please enter a number you want to cube up to!" << endl;
		cin >> number;
		for (int i = 1; i <= number; i++) {
			cube = i * i * i;
			cout << "Number is: " << i << " and the cube of " << i << " is: " << cube << "!" << endl;
		}
		system("pause");
		system("cls");
	}
}