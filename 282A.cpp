#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int n = 1;
	int x = 0;
	
	cin >> n;
	
	//string cmd;
	string temp;
	vector<string> cmd;
	
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		cmd.push_back(temp);
		//cmd = temp + " ";
	}
	
	int size = cmd.size();
	
	string statement[] = {"X++", "++X", "X--", "--X"};
		
	for (int i = 0; i < size; i++)
	{
		if (cmd[i].compare(statement[0]) * cmd[i].compare(statement[1]) == 0)
		{
			x++;
			continue;
		}
		else if (cmd[i].compare(statement[2]) * cmd[i].compare(statement[3]) == 0)
		{
			x--;
			continue;
		}
		else 
		{
			return 1;
		}
	}
	
	cout << x;
		
	return 0;
}
