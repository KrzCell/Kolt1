#include <iostream>
#include <time.h>
#include <iomanip>
#include <math.h>
using namespace std;

#define Zadanie1

#ifdef Zadanie1
#define RND (rand()+1.0)/ (RAND_MAX+2.0)
int main()
{
	double tab[5][7] = {};
	int i, j;
	double wartosc_min=12, przekatna = 0;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 7; j++)
		{
			tab[i][j] = -5 + RND * (12 + 5);
		}
	}
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 7; j++)
		{
			cout << setprecision(2) << tab[i][j] << "\t";
		}
		cout << endl;
	}

	for (i = 0; i <= 2; i++)
	{
		if (wartosc_min > tab[2][2 + i])
		{
			wartosc_min = tab[2 + i][2];
		}
	}

}
#endif

#ifdef Zadanie2
char zmienZnak(char znak)
{
	if ('A' <= znak && znak <= 'Z') znak -= 32;
	else if ('a' <= znak && znak <= 'z') znak += 32;
	else znak = '_';
}

void pozmieniaj(const char* dane)
{
	if (dane != nullptr)
	{
		const size_t DLUGOSC = strlen(dane);
		for (int znak = 0; znak < DLUGOSC / 2; znak++)
		{
			dane[znak] = zmienZnak(dane[znak]);
			dane[DLUGOSC - znak] = zmienZnak(dane[DLUGOSC - znak]);
			swap(dane[znak], dane[DLUGOSC - znak]);
		}
	}
	else throw std::invalid_argument("Brak danych");
}

void test_wypisania_od_tylu()
{
	char text[] = "jeden";
	char oczekwiany_text[] = "nedej";
	if()
}

void test_zamiana_liter()
{

}

void test_wprowadzanie_danych()
{
	char text[] = "jeden";
	try {
		pozmieniaj(text);
	}
	catch (invalid_argument)
	{
		cerr << "Zle dane";
	}
	catch(...){}
	cerr << "Blad";
}

int main()
{
	test_wprowadzanie_danych();
}

#endif

#ifdef Zadanie3
double poleKola(double promien)
{
	if (promien <= 0)
		throw domain_error("");
	return promien * promien * 3.14;
}

double objetoscWalca(double promien,double wysokosc)
{
	if (wysokosc <= 0)
		throw domain_error("");
	return poleKola(promien) * wysokosc;
}

double masaWalca(double promien, double wysokosc, double gestosc_materialu)
{
	if (gestosc_materialu <= 0)
		throw domain_error("");
	return objetoscWalca(promien, wysokosc) * gestosc_materialu;

	try {
		poleKola(promien);
		objetoscWalca(promien, wysokosc);
		masaWalca(promien, wysokosc, gestosc_materialu);
	}
	catch (domain_error)
	{
		cerr << "Zle wartosci";
	}
	catch (...) {}
	cerr << "BLAD";

}

int main()
{
	cout << masaWalca(2, 2, -2);
}

#endif

#ifdef Zadanie4
int main()
{
	int n=0,l;
	while (!(n % 2)) {
		cout << "Podaj liczbe naturalna, nieparzysta -> ";
		cin >> n;
	}

	cout << endl;
	
	do {
		for(int i=0;i<n;i++)
			cout << "  ";
		cout << "_|" << endl;
		n--;
	} while (n != 0);
}
#endif