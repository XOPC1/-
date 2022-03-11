//Персональный шаблон проекта С++
#include <iostream>
using namespace std;

void func(int* pn1, int* pn2) {
	if (pn1 == nullptr || pn2 == nullptr)
		cout << "Один из указателей нейтрален\n";
	else {
		cout << "pn1 = " << pn1 << endl;
		cout << "pn2 = " << pn2 << endl;
	}
}

void mySwap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

void pSwap(int* n1, int* n2) {
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void refSwap(int& n1, int& n2) {
	int tmp = n1;
	n1 = n2;
	n2 = tmp;
}

int main() {
	setlocale(LC_ALL, "Russian");

	int x, y;
	cout << "2 числа сюда-> ";
	cin >> x >> y;
	//mySwap(x, y);
	//pSwap(&x, &y);
	refSwap(x, y);
	cout << "x= " << x << ", y = " << y << endl;

	int n = pow(2, 2);

	/*int a = 10, b = 20;
	int* pa = &a;
	cout << pa << endl;
	int& refa = a;
	cout << refa << endl; 
	refa = 15;
	cout << a << endl;
	b += refa;
	cout << b << endl;*/

	/*Константный указатель на концтанту
	const int const* pn = &n;
	int a[3] = { 1,2, 3};
	a = &n;
	cout << pn << " = " << *pn << endl;*/
	//Указатель на константу
	/*const int* pn;
	pn = &n;
	cout << pn << " = " << *pn << endl;
	pn = &m;
	cout << pn << " = " << *pn << endl;*/
	//Указатель-константа
	/*int* const pn = &n;
	cout << pn << " = " << *pn << endl;
	*pn = 15;
	cout << pn << " = " << *pn << endl;
	pn = &m;*/


	/*int n = -1;
	if (n != -1)
		cout << n << endl;
	cin >> n;
	cout << n << endl;

	int* pn = nullptr;
	pn = &n;
	if (pn != nullptr)
		cout << pn << endl;

	int n, m;
	int* pn = nullptr;
	int* pm = &m;

	func(pn, pm);*/

	return 0;
}