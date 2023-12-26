#include <iostream>
#include <cmath>

using namespace std;

void sum(double var1, double var2);
void sub(double var1, double var2);
void mult(double var1, double var2);
void div(double var1, double var2);
void degree(double var1, double var2);
unsigned long long int fact(int var3);



double var1, var2, result;
char symbol, actions;
int i, var3;

int main(){
	while (true) {
		cout << "1 - Simple actions" << '\n' << "2 - Factorial" << '\n' << "3 - Exit" << '\n';
		cin >> actions;
		switch (actions) {
		case '1': {
			cout << "Actions that you can use: +, -, *, /, ^" << '\n';
			cout << "Enter a mathematical example with two variables: " << '\n';
			cin >> var1 >> symbol >> var2;
			switch (symbol){
			case '+':
				sum(var1, var2);
				break;

			case '-':
				sub(var1, var2);
				break;

			case '*':
				mult(var1, var2);
				break;

			case '/':
				div(var1, var2);
				break;

			case '^':
				degree(var1, var2);
				break;

			default:
				break;

			}
			break;
		}
		case '2': {
			cout << "Enter a number to find its factorial:" << "\n";
			cin >> var3;
			if (var3 > 65) {
				cout << "Too much" << '\n';
			}
			if (var3 < 0) {
				cout << "It must be greater than null" << '\n';
			}
			else {
				cout << "Factorial of " << var3 << " is:" << fact(var3) << '\n';
			}
			break;
		}
		case '3': {
			cout << "Exit" << '\n';
			exit(EXIT_SUCCESS);
		}
		default:
			break;

		}
	}
}

void sum(double var1, double var2) {
	result = var1 + var2;
	cout << "Answer is: " << result << '\n' << '\n';
}
void sub(double var1, double var2) {
	result = var1 - var2;
	cout << "The answer is: " << result << '\n' << '\n';
}
void mult(double var1, double var2) {
	result = var1 * var2;
	cout << "The answer is: " << result << '\n' << '\n';
}
void div(double var1, double var2) {
	result = var1 / var2;
	if (var2 == 0) {
		cout << "You can't divide by zero" << '\n' << '\n';
	}
	else {
		cout << "The answer is: " << result << '\n' << '\n';
	}
}
void degree(double var1, double var2) {
	result = pow(var1,var2);
	cout << "The answer is: " << result << '\n' << '\n';
}
unsigned long long fact(int var3) {
	unsigned long long int result = 1;
	for (int i = 1; i <= var3; i++) {
		result *= i;
	}
	return result;
}


