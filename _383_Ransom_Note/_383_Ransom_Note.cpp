#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
	if (ransomNote.length() == 0)
	{
		return true;
	}
	if (ransomNote.length() == 1)
	{
		for (int i = 0; i < magazine.length(); i++)
		{
			if (magazine[0] == ransomNote[0])
				return true;
		}
		return false;
	}


	int len = ransomNote.length();
	int i = 1;
	vector<int> mPrefix;
	mPrefix.push_back(-1);

	int round = 0;
	int left = 0, right = i;
	while (i < len)
	{
		if (i == 1)
		{
			mPrefix.push_back(0);
			i++;
			continue;
		}
		
		round = 0;
		
		while (round < i-1)
		{
			left = 0;
			right = i - round - 1;
			while (right < i && ransomNote[left] == ransomNote[right])
			{
				left++;
				right++;
			}
			if (right == i)
			{
				round++;
			}
			else
			{
				mPrefix.push_back(round);
				break;
			}
		}		

		i++;
	}

	int indexB = 0;
	for (int indexA = 0; indexA < magazine.length(); indexA++)
	{
		while (ransomNote[indexB] == magazine[indexA])
		{
			indexA++;
			indexB++;
			if (indexB == ransomNote.length())
			{
				return true;
			}
		}
		indexB = mPrefix[indexB];
		indexA--;
		if (indexB == -1)
		{
			indexA++;
			indexB = 0;
		}
	}
	return false;
}
int main()
{
	string input1 = "abaab", input2 = "czababaabc";
	bool output = canConstruct(input1,input2);
	cout << output;
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
