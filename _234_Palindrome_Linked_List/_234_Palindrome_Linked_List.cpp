#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}

};
ListNode* reverseList(ListNode* head);

int main()
{
	ListNode* h = new ListNode(0);
	h->next = new ListNode(1);
	h->next->next = new ListNode(2);

	bool output = reverseList(h);
	cout << output << endl;

	system("pause");
}

ListNode* reverseList(ListNode* head) {
	if (!head || !head->next) return head;
	ListNode* newHead = reverseList(head->next);
	head->next->next = head;
	head->next = NULL;
	return newHead;
}
bool isPalindrome(ListNode* head) {
	if (head == NULL || head->next == NULL)
		return true;
	ListNode* slow = head;
	ListNode* fast = head;
	while (fast->next != NULL && fast->next->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	slow->next = reverseList(slow->next);
	slow = slow->next;
	while (slow != NULL)
	{
		if (slow->val != head->val)
			return false;
		slow = slow->next;
		head = head->next;
	}
	return true;
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
