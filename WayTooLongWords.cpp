#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	
	string str[n], str_replace[n];
	int length = 0;
	
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];	
		length = str[i].length();
		
		if (length <= 10)
		{
			str_replace[i] = str[i];
		}
		else	
			str_replace[i] = str[i][0] + to_string(length-2) + str[i][length-1];
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << str_replace[i] << endl;
	}
	
	return 0;
}
