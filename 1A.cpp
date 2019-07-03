#include <iostream>
using namespace std;

int main() {
	//cout << "n m a" << endl;
	
	int n, m, a;
	
	while (!(cin >> n >> m >> a) || (n < 1) || (m < 1) || (a < 1)
			|| (n > 1e9) || (m > 1e9) || (a > 1e9))
	{
		cout << "Err" << endl;
		cin.clear();
		fflush(stdin);
	}
	
	double nn, mm;
	
	if ((n%a) != 0)
		nn = n/a +1;
	else
		nn = n/a;
	
	if ((m%a) != 0)
		mm = m/a +1;	
	else 
		mm = m/a;
		
	double need;
	need = nn * mm;
	
	cout.setf(ios::fixed);
	cout.precision(0);
	cout << need << endl;
	cout << need << endl;
	
	return 0;
}
