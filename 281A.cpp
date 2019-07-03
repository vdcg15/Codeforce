#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string str;
	
	cin >> str;
	
	char c = str[0];
	
	if ((c > 64) && (c < 91))
	{}
	else 
	{
		c = c - 32;
	}
	
	str.replace(0, 1, 1, c);
	
	cout << str;
	
	return 0;
}
