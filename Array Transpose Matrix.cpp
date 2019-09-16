#include<iostream>
using namespace std;
int main()
{
	int num[3][4];
	int a = 1;

	for(int i = 1 ; i <= 2 ; i++)
		for(int j = 1 ; j <=3 ; j++)
		{
			cout << "Input " << i << " " << j << " : " ;
			cin >> num[i][j];
		}
	cout << "**********Display**********\n";
	for(int i = 1 ; i <= 2 ; i++)
		for(int j = 1 ; j <=3 ; j++)
			{
			cout << num[i][j] << " ";
			if (a % 3 == 0)
				cout << endl;
			a++;
			}
	cout << "**********Transpose Matrix**********\n";
	for(int i = 1 ; i <= 3 ; i++)
		for(int j = 1 ; j <=2 ; j++)
			{
			cout << num[j][i] << " ";
			if (a % 2 == 0)
				cout << endl;
			a++;
			}
}