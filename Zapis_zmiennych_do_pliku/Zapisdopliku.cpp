#include <iostream>
#include <fstream> //biblioteka sluzy do wpisywania zmiennych do pliku tekstowego

using namespace std;
//Program do zapisu w pliku!!!

string imie, nazwisko;
int nr_tel;

int main()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj nr telefonu: ";
    cin >> nr_tel;

    fstream plik;
    plik.open("wizytowka.txt", ios::out | ios::app);

    plik << "Imie: " << imie << endl;
    plik << "Nazwisko: " << nazwisko << endl;
    plik << "Nr.telefonu: " << nr_tel << endl;

    plik.close();

}