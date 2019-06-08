#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

string addStrings(string num1, string num2) {
	int index1 = num1.length() - 1, index2 = num2.length() - 1;
	string out = "";
	int carry = 0;
	int res = 0;
	
	while (index1 != -1 && index2 != -1)
	{
		res = num1[index1] + num2[index2] - '0' - '0'+carry;
		if (res >= 10)
		{
			carry = 1;
			res = res - 10;
		}
			
		else
			carry = 0;
		out = to_string(res) + out;
		index1--;
		index2--;
	}
	while(index1!=-1)
	{
		res = num1[index1] + carry - '0';
		if (res >= 10)
		{
			carry = 1;
			res = res - 10;
		}
		else
			carry = 0;
		out = to_string(res) + out;
		index1--;
	}
	while (index2 != -1)
	{
		res = num2[index2] + carry - '0';
		if (res >= 10)
		{
			carry = 1;
			res = res - 10;
		}
		else
			carry = 0;
		out = to_string(res) + out;
		index2--;
	}
	if (carry == 1)
	{
		out = "1" + out;
	}
	return out;
}
int main()
{
	string input1="1",input2="9";
	
	string output = addStrings(input1,input2);
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
