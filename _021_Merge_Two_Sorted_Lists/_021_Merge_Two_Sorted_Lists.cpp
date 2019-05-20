#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;


struct ListNode 
{ 
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);

int main()
{
	ListNode* input1,*input2;
	ListNode* output;

	output = mergeTwoLists(input1,input2);
	cout << output;

	system("pause");
}

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
	ListNode* left=l1, * right=l2;
	if (l1 == NULL && l2 == NULL)
	{
		return NULL;
	}
	else if (l1 == NULL)
	{
		return l2;
	}
	else if (l2 == NULL)
	{
		return l1;
	}

	ListNode* ret,*index;
	if (l1->val <= l2->val)
	{
		ret = new ListNode(l1->val);
		l1 = l1->next;
	}
	else
	{
		ret = new ListNode(l2->val);
		l2 = l2->next;
	}
	index = ret;

	while (l1!=NULL || l2!= NULL)
	{
		if (l1 == NULL)
		{
			index->next = new ListNode(l2->val);
			index = index->next;
			l2 = l2->next;
			continue;
		}
		else if (l2 == NULL)
		{
			index->next = new ListNode(l1->val);
			index = index->next;
			l1 = l1->next;
			continue;
		}
		if (l1->val <= l2->val)
		{
			index->next = new ListNode(l1->val);
			index = index->next;
			l1 = l1->next;
		}
		else
		{
			index->next = new ListNode(l2->val);
			index = index->next;
			l2 = l2->next;
		}
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
