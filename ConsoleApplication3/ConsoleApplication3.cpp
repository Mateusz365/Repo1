#include <iostream>

using namespace std;

void dodawanie(int a, int b, int& suma) {
	suma = a + b;
}


void sqrtValues(int a, int* b) {
	a *= a;
	*b *= *b;
}

void potegowanie(int& a) {
	a *= a;

}

void f1(int a, int b = 5) {
	cout << "Argumenty domniemane: " << a << " " << b << endl;
}

inline int* dodawanie2(int* a, int* b) {
	int wynik = *a + *b;
	return &wynik;
}

inline int* dodawanie3(int* a, int* b);  //Tak nie wolno tego robić

void f2() {
	int a = 1;
	static int licznik = 0;

	licznik++;
	a++;
	cout << "Wywolanie funkcji nr: " << licznik <<" a= "<<a<<endl;
}

template <class myType>
myType dodawanie4(myType a, myType b) {
	myType wynik = a + b;
	return wynik;
}

template <class myType>
myType odejmowanie(myType a, myType b) {
	myType wynik = a - b;
	return wynik;
}





int main()
{
	int a = 5;
	int b = 10;
	//int* pb = &b;
	cout << a << " " <<b << endl;
	sqrtValues(a, &b);
	cout << a << " " << b << endl;


	int x = 50;
	cout << x << endl;
	potegowanie(x);
	cout << x << endl;

	f1(523); //Wywołanie z argumentem domniemanym
	f1(523, 32); //Wywołanie z dwoma argumentami

	int k = 50;
	int w = 10;

	int* pa = dodawanie3(&k,&w);
	cout << *pa << endl;
	
	for (int i = 0; i < 10; i++)
	{
		f2();
	}

	unsigned long long int z = 8;
	cout << sizeof(z);
	cout << "Wynik dodawania to: "<<dodawanie4(z, z) << endl;
	cout << "Wynik odejmowania to: " << odejmowanie(z, z) << endl;
}

inline int* dodawanie3(int* a, int* b) {
	int wynik = *a + *b;
	return &wynik;
}