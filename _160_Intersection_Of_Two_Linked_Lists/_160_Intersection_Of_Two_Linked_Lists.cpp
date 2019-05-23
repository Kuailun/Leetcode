#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}

};
ListNode* getIntersectionNode(ListNode* headA, ListNode* headB);

int main()
{
	ListNode* A,*B;
	ListNode* input1 = new ListNode(4);
	A = input1;
	input1->next = new ListNode(1);
	input1 = input1->next;

	ListNode* input2 = new ListNode(5);
	B = input2;
	input2->next = new ListNode(0);
	input2 = input2->next;
	input2->next = new ListNode(1);
	input2 = input2->next;

	input1->next = new ListNode(8);
	input2->next = input1->next;
	input1 = input1->next;
	input1->next = new ListNode(4);
	input1 = input1->next;
	input1->next = new ListNode(5);
	input1 = input1->next;
	input1->next = NULL;

	
	bool output;

	output = getIntersectionNode(A,B);
	cout << output << endl;
	system("pause");
}
ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
{
	if (!headA || !headB)
	{
		return nullptr;
	}
	int a = 0,b=0;
	ListNode* A = headA, * B = headB;
	while (A)
	{
		A = A->next;
		a++;
	}
	while (B)
	{
		B = B->next;
		b++;
	}
	if (a > b)
	{
		for (int i = 0; i < a-b; i++)
		{
			headA = headA->next;
		}
	}
	else if (a < b)
	{
		for (int i = 0; i < b - a; i++)
		{
			headB = headB->next;
		}
	}

	while (headA)
	{
		if (headA == headB)
		{
			return headA;
		}
		headA = headA->next;
		headB = headB->next;
	}
	return nullptr;
	
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