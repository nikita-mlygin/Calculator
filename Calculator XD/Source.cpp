#include <iostream>;
#include <Windows.h>;

using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float num1, num2; // инициализируем 2 переменные в памяти для чисел, над которыми будем
					  // производить вычисления
	char sign; // и переменную для знака

	cin >> num1 >> sign >> num2; // получаем значения всех переменных

	switch (sign) { // конструкция switch принимает значение переменной sign
	case '+': // и сравнивает с каждым значением case
		cout << num1 << " + " << num2 << " = " << num1 + num2; // и выполняет тело каждого case-а
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