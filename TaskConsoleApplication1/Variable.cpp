#include <iostream>

using namespace std;

/*
*
* 
* 
* 
* Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.
* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik.
* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci kraw�dzi sze�cianu i obliczy jego obj�to��, wy�wietlaj�c wynik.
* Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.
* Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.
*
* 
* 
* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych. Nast�pnie wykona operacje (+, -, *, /) i wy�wietli wyniki.
* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wy�wietlaj�c wynik.
* Napisz program, kt�ry poprosi u�ytkownika o podanie wsp�rz�dnych (x1, y1) i (x2, y2) dw�ch punkt�w w uk�adzie kartezja�skim, a nast�pnie obliczy odleg�o�� mi�dzy nimi, wy�wietlaj�c wynik.
*/



// Napisz program, kt�ry wczyta od u�ytkownika jego wiek a nast�pnie wy�wietli go na konsoli.

void variableTask1()
{
	int age;
	cout << "Wprowadz liczbe uzytkownika: ";
	cin >> age;
	cout << age;
}

//Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry, milimetry i  kilometry.Wy�wietl wynik.

void variableTask2()
{
	float m;
	cout << "Wprowadz dlugosc w metrach: ";
	cin >> m;
	cout << "cm: " << m / 100;
	cout << "cm: " << m * 1000;
	cout << "cm: " << m / 1000;

}

//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.

void variableTask3()
{
	float a, b;
	cout << "Wprowadz dlugosc boku a: ";
	cin >> a;
	cout << "Wprowadz dlugosc boku b: ";
	cin >> a;

	cout << a * b << "Pole prostokata: ";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.

void variableTask4() {
	float base, height;
	int amount = 0;
	cout << "Wprowadz podstawe: ";
	cin >> base;
	cout << "Wprwoadz wysokosc: ";
	cin >> height;
	
	amount = (base * height) / 2;
	cout << amount;
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb(a, b) i obliczy �redni� arytmetyczn� tych liczb.Nast�pnie wy�wietli wynik.

void variableTask5() 
{
	float a, b;
	int amount = 0;
	cout << "Podaj liczbe pierwsza: ";
	cin >> a;
	cout << "Podaj liczbe druga: ";
	cin >> b;
	
	amount = (a + b) / 2;
	cout << amount;
	
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie trzech liczb (a, b, c) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

void variableTask6()
{
	float a, b, c;
	int amount = 0;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	cout << "Podaj trzecia liczbe: ";
	cin >> c;

	amount = (a + b + c) / 3;
	cout << amount;

}

//Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

void variableTask7()
{
	float a, b, c; 
	int w1 = 1;
	int w2 = 2;
	int w3 = 3;
	int amount = 0;
	
	cout << "Wprowadz liczbe z waga 1: ";
	cin >> a;
	cout << "Wprowadz liczbe z waga 2: ";
	cin >> b;
	cout << "Wprowadz liczbe z waga 3: ";
	cin >> c;

	amount = (a * w1 + b * w2 + c * w3) / w1 + w2 + w3;
	cout << "Srednia wazona: " << amount;


}