#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

vector<string> readBinaryWatch(int num) {
	vector<string> ret;
	int hour, minute;
	for (int i = 0; i < 1024; i++)
	{
		int temp = (((i & 512) >> 9) + ((i & 256) >> 8) + ((i & 128) >> 7) + ((i & 64) >> 6) + ((i & 32) >> 5) + ((i & 16) >> 4) + ((i & 8) >> 3) + ((i & 4) >> 2) + ((i & 2) >> 1) + (i & 1));
		if (temp == num)
		{
			minute = i % 64;
			hour = (i & (512 + 256 + 128 + 64)) >> 6;
			
			if (minute >= 60)
				continue;
			if (hour > 11)
				continue;
			if (minute < 10)
			{
				ret.push_back(to_string(hour)+":0"+to_string(minute));
			}
			else
			{
				ret.push_back(to_string(hour) + ":" + to_string(minute));
			}
		}
	}
	return ret;
}
int main()
{
	int n = 3;
	vector<string> output = readBinaryWatch(n);
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
