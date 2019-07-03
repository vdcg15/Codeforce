#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int length = 0;
	int many = 0;
	
	string str;
	
	cin >> length;
	cin >> str;
	
	for (int i = 0; i < length - 1; i++)
	{
		if (str[i] == str[i+1])
		{
			many++;
			continue;
		}
		else
		{
			continue;
		}
	}
	
	cout << many;
	
	return 0;
}
