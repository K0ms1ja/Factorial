#include <iostream>
using namespace std;

int main() {
	int n, sum = 1;
	bool yn = true;
	char c;
	while (yn == true) {
		unos:
		cout << "Enter a number: " << endl;
		cin >> n;
		if (n < 0) {
			system("cls");
			cout << "Only use numbers that are equal to or larger than zero!!" << endl;
			goto unos;
		}
		for (int i = 1; i <= n; i++) {
			sum = sum * i;
		}

		cout << "Factorial of the number " << n << " is " << sum << endl;
		input:
		cout << "Do you wish to do another? (yn)" << endl;
		cin >> c;
		if (c == 'n') {
			yn = false;
			system("cls");
			cout << "Goodbye.";
		}
		else if (c != 'y') {
			system("cls");
			cout << "Incorrect input, use only y and n" << endl;
			goto input;
		}
		else {
			system("cls");
			sum = 1;
		}
	}
}