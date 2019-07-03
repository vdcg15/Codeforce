#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	cout << endl;

	string str[n], str_replace[n];
	int length = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
		length = str[i].length();
		str_replace[i] = str[i][0] + to_string(length - 2) + str[i][length - 1];
	}

	for (int i = 0; i < n; i++)
	{
		cout << str_replace[i];
	}

	return 0;
}