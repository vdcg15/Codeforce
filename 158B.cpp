#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n = 0;
	int temp = 0;
	
	cin >> n;
	
	vector<int> v1, v2, v3, v4;
	
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		
		switch (temp)
		{
			case 1:
				v1.push_back(temp);
				break;
			case 2:
				v2.push_back(temp);
				break;
			case 3:
				v3.push_back(temp);
				break;
			case 4:	
				v4.push_back(temp);
				break;
			default:
				break;
		}	
	} 
	
	int l1 = v1.size();
	int l2 = v2.size();
	int l3 = v3.size();
	int l4 = v4.size();
	
	int n1, n3, n2;
	int n4 = l4;
	
	n3 = l3;
	n2 = (l2*2) / 4;
	
	int delta2 = (l2*2) % 4;
	
	int delta1 = l1 - l3;
	
	if (delta1 > 0)
	{
		n1 = (delta1 + delta2) / 4;
		
		if (((delta1 + delta2) % 4) != 0)
			n1++;
	}
	else
	{
		n1 = 0;
		
		if (delta2 != 0)
			n2++;
	}

	cout << n1 + n2 + n3 + n4;
	
	return 0;
} 
