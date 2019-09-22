#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;
void display(int [5][6]);
void graph(int [5][6]);
int main()
{
	int num[5][6];
	srand(time(NULL));
	for (int r = 0 ; r < 5 ; r++)
		for (int c = 0 ; c < 6 ; c++)
		num[r][c] = rand() % 10;

	display(num);
	graph(num);
}

void display(int num[5][6])
{
	for (int r = 0 ; r < 5 ; r++)
	{
		for (int c = 0 ; c < 6 ; c++)
			cout << num[r][c] << "\t" ;
	cout << "\n";
	}
	cout << "\n\n" ;
	cout << setfill('-') << setw(20) << "-" << "display graph" << setfill('-') << setw(20) << "-" << "\n";
	cout << "\t0\t1\t2\t3\t4\t5\n";
	cout << setfill('-') << setw(53) << "-" << "\n";
}

void graph(int num[5][6])
{
	for (int r = 0 ; r < 5 ; r++)
	{
	cout << r << "|\t";
		for (int c = 0 ; c < 6 ; c++)
		{
			if (num[r][c] > 0)
				cout << "*" << "\t" ;
			else if (num[r][c] == 0)
				cout << "\t" ;
		}
	cout << "\n";
	}
}