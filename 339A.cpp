#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string str;
	string temp;
	int temp2;
	
	string test = "+";
	
	cin >> str;
	
	int length = str.length();
	
	vector<int> v;
	
	for (int i = 0; i < length; i++)
	{
		temp = str[i];
		if (temp.compare(test) != 0)
		{
			temp2 = stoi(temp);
			//cout << temp2 << endl;
			
			v.push_back(temp2);
		}
		else
		{
			continue;
		}
	}
	
	sort(v.begin(), v.end());
	
	int length2 = v.size();
	
	cout << v[0];
	
	for (int i = 1; i < length2; i++)
	{
		cout << "+" << v[i];
	}
	
	return 0;
}
