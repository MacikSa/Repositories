#include <iostream>
#include <limits>

using namespace std;

class Kalkulator
{
public:
	void Dodawanie(float a, float b)
	{
		cout << a + b << endl;
	}
	void Odejmowanie(float a, float b)
	{
		cout << a - b << endl;
	}
	void Mnozenie(float a, float b)
	{
		cout << a * b << endl;
	}
	void Dzielenie(float a, float b)
	{
		cout << a / b << endl;
	}
};
int main()
{
	unsigned int choise;
	float a, b;
	Kalkulator calculator;
	do {
		cout << "1. Dodawanie" << endl;
		cout << "2. Odejmowanie" << endl;
		cout << "3. Mnozenie" << endl;
		cout << "4. Dzielenie" << endl;
		cout << "5. wyjscie z programu" << endl;
		cin >> choise;

		if (cin.fail())
		{
			cout << "Blad! Podano niepoprawna liczbe!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			cout << "Wczytano liczbe: " << choise << endl;
		}

		switch (choise)
		{
		case 1:
			cout << "Podaj dwie wartosci:" << endl;
			cin >> a >> b;
			if (cin.fail())
			{
				cout << "Blad! Podano niepoprawna liczbe!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else
			{
				calculator.Dodawanie(a, b);
			}
			break;
		case 2:
			cout << "Podaj dwie wartosci:" << endl;
			cin >> a >> b;
			if (cin.fail())
			{
				cout << "Blad! Podano niepoprawna liczbe!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else
			{
				calculator.Odejmowanie(a, b);
			}
			break;
		case 3:
			cout << "Podaj dwie wartosci:" << endl;
			cin >> a >> b;
			if (cin.fail())
			{
				cout << "Blad! Podano niepoprawna liczbe!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else
			{
				calculator.Mnozenie(a, b);
			}
			break;
		case 4:
			cout << "Podaj dwie wartosci:" << endl;
			cin >> a >> b;
			if (cin.fail())
			{
				cout << "Blad! Podano niepoprawna liczbe!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else
			{
				if (b == 0)
				{
					cout << "Dzielnik musi byc rozny od 0!!!" << endl;
				}
				else
				{
					calculator.Dzielenie(a, b);
				}
			}
			break;
		case 5:
			cout << "Wyjscie z programu!!!" << endl;
			break;
		default:
			cout << "Niepoprawne dane, wpisz wartosci jeszcze raz!" << endl;
		}

	} while (choise != 5);

	return 0;
}