#include <iostream>

using namespace std;

int main() {
	int mat[5][5];
	int a, b;
	
	for (int i = 0; i < 5; i++)
	{
		cin >> mat[i][0]>> mat[i][1] >> mat[i][2] >> mat[i][3] >> mat[i][4];
		for (int j = 0; j <5; j++)
		{
			if (mat[i][j] == 1)
			{
				a = i;
				b = j;
				
				continue;
			}
			else
			{
				continue;
			}
		}
	}
	
	cout << abs(2-a) + abs(2-b);	
		
	return 0;
}
