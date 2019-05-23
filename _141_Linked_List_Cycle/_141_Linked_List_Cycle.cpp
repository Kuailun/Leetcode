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
bool hasCycle(ListNode* head);

int main()
{
	ListNode *input = new ListNode(0);
	bool output;

	output = hasCycle(input);
	cout << output << endl;
	system("pause");
}
bool hasCycle(ListNode* head)
{
	ListNode* slow=head, * fast=head;
	if (!head)
	{
		return false;
	}
	if (!head->next)
	{
		return false;
	}
	if (!head->next->next)
	{
		return false;
	}
	slow = slow->next;
	fast = fast->next->next;
	while (fast->next != nullptr && fast->next->next != nullptr)
	{
		if (slow != fast)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		else
		{
			return true;
		}
	}
	return false;
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