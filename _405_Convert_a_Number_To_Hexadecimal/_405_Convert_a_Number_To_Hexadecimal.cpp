#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

string toHex(int num) {
	uint32_t mnum;
	string ret = "";
	int res;
	if (num < 0)
	{
		mnum = UINT32_MAX + num + 1;
	}
	else
	{
		mnum = num;
	}
	if (mnum == 0)
	{
		return "0";
	}
	while (mnum != 0)
	{
		res = mnum % 16;
		if (res < 10)
		{
			ret = to_string(res) + ret;
		}
		else
		{

			ret = string(1, 'a' + res - 10) + ret;
		}
		mnum = mnum / 16;
	}
	return ret;
}
int main()
{
	int num = 26;
	string output = toHex(num);
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
