#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int  a, b, x, y;
	cout << "\n������ A: ";
	cin >> a;
	cout << "\n������ B: ";
	cin >> b;
	cout << "\n ����� A � ������ ��� ����������� ?   " << a % 2 && a < 10 << endl;
	system("pause");

	return 0;
}
