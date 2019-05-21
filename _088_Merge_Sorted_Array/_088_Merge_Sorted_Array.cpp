#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}

};
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);

int main()
{
	vector<int> input1, input2;
	input1.push_back(0);

	input2.push_back(1);

	ListNode* output;

	merge(input1,0,input2,1);

	system("pause");
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	int index = m+n-1;
	while (index!=-1)
	{
		if (m == 0 || n == 0)
		{
			if (m == 0)
			{
				nums1[index] = nums2[n - 1];
				n--;
				index--;
				continue;
			}
			if (n == 0)
			{
				nums1[index] = nums1[m - 1];
				m--;
				index--;
				continue;
			}
		}
		else
		{
			if (nums1[m - 1] < nums2[n - 1])
			{
				nums1[index] = nums2[n - 1];
				n--;
			}
			else
			{
				nums1[index] = nums1[m - 1];
				m--;
			}
		}
		
		
		index--;
	}
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
