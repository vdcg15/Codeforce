#include <iostream>
#include <string>
#include <vector>

using namespace std;

char convert(char c0)
{
	if ((c0 > 64) && (c0 < 91))
		return c0 + 32;
	else
		return c0;
}

int main() {
	string str1;
	string str2;
	
	cin >> str1;
	cin >> str2;
	
	int length = str1.length();
	int result = 0;
	
	for (int i = 0; i < length; i++)
	{
		char c1, c2;
		
		c1 = convert(str1[i]);
		c2 = convert(str2[i]);
		
		if (c1 > c2)
		{
			result = 1;
			break;
		}
		else if (c1 < c2)
		{
			result = -1;
			break;
		}
		else
		{
			continue;
		}
	}
	
	cout << result;
	
	return 0;
}
