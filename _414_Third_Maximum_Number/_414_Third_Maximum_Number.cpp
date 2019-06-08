#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

int thirdMax(vector<int>& nums) {
	int max = -2147483648, second = -2147483648, third = -2147483648;
	int flag = 0;
	for (int i : nums) {
		if (i > max) {
			max = i;
		}
	}

	for (int i : nums) {
		if (i >= second && i < max) {
			second = i;
		}
	}
	for (int i : nums) {
		if (i >= third && i < second) {
			third = i;
			flag = 1;
		}
	}
	//  System.out.println("max:"+max+"second:"+second+"third:"+third);
	if (flag == 1) {
		return third;
	}
	return max;

}
int main()
{
	vector<int> num;
	num.push_back(5);
	int output = thirdMax(num);
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
