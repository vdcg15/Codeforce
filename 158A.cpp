#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k =0;
	cin >> n >> k;
	
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
	
	int num = 0;
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		
		if (i > 0)
		{
			if (arr[i] > arr[i-1])
				return 1;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] >= arr[k-1]) && (arr[i] > 0))
			num++;
		else
		{}
	}
	
	cout << num;
	
	return 0;
}
