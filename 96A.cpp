#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string line;
	string temp;
	
	const int D = 7;
	
	int result = 0;
	
	cin >> line;
	
	int length = line.length();
	string test[] = {"0000000", "1111111"};
	
	for (int i = 0; i < length - D + 1; i++)
	{
		temp = line.substr(i, D);
		if ((temp.compare(test[0]) * temp.compare(test[1])) == 0)
		{
			result = 1;
			break;
		}
		else
		{
			continue;
		}
	}
	
	if (result == 1)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	
	return 0;
}
