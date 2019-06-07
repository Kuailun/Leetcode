#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

vector<string> fizzBuzz(int n) {
	int cnt3 = 1;
	int cnt5 = 1;
	vector<string> ret;
	
	int i = 1;
	while (i != n+1)
	{
		if (cnt3 == 3 && cnt5 == 5)
		{
			cnt3 = 1;
			cnt5 = 1;
			ret.push_back("FizzBuzz");
		}
		else if (cnt3 == 3)
		{
			cnt3 = 1;
			cnt5++;
			ret.push_back("Fizz");
		}
		else if (cnt5 == 5)
		{
			cnt5 = 1;
			cnt3++;
			ret.push_back("Buzz");
		}
		else
		{
			cnt3++;
			cnt5++;
			ret.push_back(to_string(i));
		}
		i++;
	}
	return ret;
}
int main()
{
	int num = 15;
	vector<string> output = fizzBuzz(num);
	system("pause");
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
