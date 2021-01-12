#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

#define Zadanie1

#define RND (rand()+1.0)/ (RAND_MAX+2.0)
#ifdef Zadanie1
int main()
{
	double tab[5][7] = {};
	int i, j;

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

}
#endif

#ifdef Zadanie2

	// TU ROZWIĄZUJ ZADANIE 2:

#endif

#ifdef Zadanie3

	// TU ROZWIĄZUJ ZADANIE 3:

#endif

#ifdef Zadanie4

	// TU ROZWIĄZUJ ZADANIE 4:

#endif