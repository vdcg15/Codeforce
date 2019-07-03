#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sample;
	string result;

	char vowel_u[6] = {'A', 'O', 'Y', 'E', 'U', 'I'};
	char vowel_l[6] = {'a', 'o', 'y', 'e', 'u', 'i'};
	
	cin >> sample;
	int length = sample.length();
	
	for (int i = 0; i < length; i++)
	{
		if ((sample[i] < 65) || (sample[i] > 122) || ((sample[i] > 90) && (sample[i] < 97)))
			return 1;
		else 
		{	
			int v = 0;		
			for (int j = 0; j < 6; j++)
			{
				if ((sample[i] == vowel_u[j]) || (sample[i] == vowel_u[j] + 32))
				{
					//sample = sample.substr(0, i-1) + sample.substr(i+1, length-1);
					//length--;
					v = 1;
					break;
				}
				else 
					continue;
			}
			
			if (v == 1)
				continue;
			else
			{
				char temp = sample[i];
				
				if ((sample[i] >= 65) && (sample[i] <= 90))
				{
					temp = sample[i] + 32;
				}
				
				//cout << result;
				result = result + '.' + temp;
			}
		}
	}
	
	cout << result;
	
	return 0;
}
