
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}

};
ListNode* removeElements(ListNode* head, int val);

int main()
{
	ListNode* head = new ListNode(5);
	ListNode* cur = head;
	cur->next = new ListNode(5);
	cur = cur->next;
	//cur->next = new ListNode(6);
	//cur = cur->next;
	//cur->next = new ListNode(5);
	//cur = cur->next;
	//cur->next = new ListNode(1);
	//cur = cur->next;



	ListNode* output = removeElements(head,5);
	cout << output << endl;

	system("pause");
}

ListNode* removeElements(ListNode* head, int val) {
	if (!head)
	{
		return head;
	}
	if (!head->next && head->val == val)
	{
		return nullptr;
	}
	else if (!head->next)
	{
		return head;
	}

	ListNode* h=NULL,*last = head;
	bool is = false;
	while (head)
	{
		if (!head)
		{
			return h;
		}
		else if (head->val != val)
		{
			last = head;
			head = head->next;
			if (!is)
			{
				is = true;
				h = last;
			}
		}
		else if (head->val == val)
		{
			if (is)
			{
				last->next = head->next;
			}
			
			head = head->next;
		}
	}
	return h;
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
