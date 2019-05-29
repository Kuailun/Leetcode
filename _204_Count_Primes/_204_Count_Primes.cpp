
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int countPrimes(int n);

int main()
{
	int input=10;
	
	int output = countPrimes(input);
	cout << output << endl;

	system("pause");
}

int countPrimes(int n) {
	if (n <= 2)
	{
		return 0;
	}

	int index = 0;
	vector<int> hub;
	hub.push_back(2);
	int current = 2;
	bool flag = true;
	while (current < n-1)
	{
		current++;
		flag = true;
		index = 0;
		while (index < hub.size()&&hub[index] <= sqrt(current))
		{
			if (current % hub[index] == 0)
			{
				flag = false;
				break;
			}
			index++;
		}
		if (flag)
		{
			hub.push_back(current);
		}
	}
	return hub.size();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
