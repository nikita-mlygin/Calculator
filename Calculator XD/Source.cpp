#include <iostream>;
#include <Windows.h>;
#include <string>;

using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float num1, num2;
	char sign;

	cin >> num1 >> sign >> num2;

	switch (sign) {
	case '+':
		cout << num1 << " + " << num2 << " = " << num1 + num2;
		break;
	case '-':
		cout << num1 << " - " << num2 << " = " << num1 - num2;
		break;
	case '*':
		cout << num1 << " * " << num2 << " = " << num1 * num2;
		break;
	case '/':
		cout << num1 << " / " << num2 << " = " << num1 / num2;
		break;
	}

	return 0;
}