// kolejka
//

#include "pch.h"
#include <iostream>


int kolejka[N], w;

int push(int s)
{
	if (w < N) {
		kolejka[w++] = s;
		return 1;
	}
	else return 0;
}

int pop(int*s)
{
	if (w > 0)
	{
		*s = kolejka[++w];
			return 1;
	}
	else return 0;
	}

void pokaz() {
	cout << "kolejka: "<<  endl;
	for (int i = 0; i < w; ++i)
		cout << kolejka[i] << endl;
}

int main()
{
	if(!push(1))cout<<"nie udalo sie ustawić w kolejce\n";
	if(!push(2))cout << "nie udalo sie ustawić w kolejce\n";
	if (!push(3))cout << "nie udalo sie ustawić w kolejce\n";
	if (!push(4))cout << "nie udalo sie ustawić w kolejce\n";
	if (!push(5))cout << "nie udalo sie ustawić w kolejce\n";
	if (!push(6))cout << "nie udalo sie ustawić w kolejce\n";
	if (!push(7))cout << "nie udalo sie ustawić w kolejce\n";
	if (!push(8))cout << "nie udalo sie ustawić w kolejce\n";
	pokaz();
	int s;
	if (pop(&s)) cout << "Z kolejki wyszło:  " << s << endl;
	else cout << "Nie udalo sie dodac do kolejki\n";
	if (pop(&s)) cout << "Z kolejki wyszło : " << s << endl;
	else cout << "Nie udalo sie dodac do kolejki\n";
	if (!push(7)) cout << "Nie udalo sie dodac do kolejki\n";
	if (!push(11)) cout << "Nie udalo sie dodac do kolejki\n";
	if (!push(13)) cout << "Nie udalo sie dodac do kolejki\n";
	if (!push(17)) cout << "Nie udalo sie dodac do kolejki\n";
	pokaz();
	getchar();
	

	getchar();
	
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
