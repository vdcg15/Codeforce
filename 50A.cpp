#include <iostream>
using namespace std;

int main() {
	int m = 0;
	int n = 0;
	
	cin >> m >> n;
	
	int r1, r2;
	
	r1 = m % 2;
	r2 = n % 2;
	
	int total = 0;
	
	if (r1 == 0)
	{
		total = (m/2) * n;
	}
	else if (r2 == 0)
	{
		total = (n/2) * m;
	}
	else
	{
		total = (m-1)/2 * n + (n-1)/2;
	}
	
	cout << total;
	
	return 0;
}
