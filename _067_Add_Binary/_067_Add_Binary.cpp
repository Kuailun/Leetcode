#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

string addBinary(string a, string b);

int main()
{
	string input1="1",input2="11";

	string output;

	output = addBinary(input1,input2);
	std::cout << output;

	system("pause");
}

string addBinary(string a, string b)
{
	int size_a = a.length(), size_b = b.length();
	string aa, bb;
	string ret="";
	if (size_a >= size_b)
	{
		aa = a;
		bb = b;
	}
	else
	{
		aa = b;
		bb = a;
		size_a = b.length();
		size_b = a.length();
	}

	int index = 1;
	int carry = 0;
	int digit = 0;
	while (index != size_b+1)
	{
		digit = aa[size_a-index] + bb[size_b-index] + carry-96;
		if (digit < 2)
		{
			carry = 0;
		}
		else
		{
			carry = 1;
			digit = digit - 2;
		}
		ret.insert(ret.begin(), digit+48);
		index = index + 1;
	}

	while (index != size_a+1)
	{
		digit = aa[size_a - index] + carry-48;
		if (digit < 2)
		{
			carry = 0;
		}
		else
		{
			carry = 1;
			digit = digit - 2;
		}
		ret.insert(ret.begin(), digit+48);
		index = index + 1;
	}
	if (carry == 1)
	{
		ret.insert(ret.begin(), carry + 48);
	}
	return ret;
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
