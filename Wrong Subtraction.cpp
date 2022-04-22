/*
	Zadanie z platformy codeforces.com
	Nazwa zadania: Wrong Subtraction
	Link do zadania: https://codeforces.com/problemset/problem/977/A
	Wynik: 100/100
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	int number, how_many_negative_1;

	cin >> number >> how_many_negative_1;
	string n;

	for (int i = 0; i < how_many_negative_1; i++)
	{
		n = to_string(number);
		if (n[n.size() - 1] == '0')
			number /= 10;
		else
			number--;
	}

	cout << number;
	return 0;
}