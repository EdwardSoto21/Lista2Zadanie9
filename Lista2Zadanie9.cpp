
#include <iostream>
#include <ctime> // używając time
#include <cstdlib>

using namespace std;

int main()

{
	srand(time(NULL)); // generator losowych liczb 
	int n = 0;
	cout << "Wprowadz liczbe slupkow: ";
	cin >> n; // Sczytywanie z klawiatury "n"

	int** a = new int* [n]; // tworzenie tablicy wskażników

	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n]; // tworzenie elementów
	}

	for (int i = 0; i < n; i++) // <-- Praca ze zwykłymi tablicami
	{

		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 100; // każdy element losowej liczby od 0 do 99
			cout << a[i][j] << " "; // wyświetlanie elementów na konsoli
		}

		cout << endl; // dwuwymiarowa tablica. linia się skończyła. przeprowadzenia wiersza ta wyświetlanie na konsoli
	}

	// usunięcie tablicy
	for (int i = 0; i < n; i++)
	{
		delete[]a[i]; // usunięcie każdego elementa
	}
	delete[] a; // potem tablicy
	return 0;

}
