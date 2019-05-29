
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	string line;
	ifstream in ("file.txt");
	if (in.is_open())
	{
		while (getline(in, line))
		{
			if (line.length() == 12 || line.length() == 14)
			{
				if (line[3] == '-' && line[7] == '-' || line[0] == '(' && line[4] == ')' && line[5] == ' ' && line[9] == '-')
				{
					cout << line << endl;
				}
			}
		}
	}

}

