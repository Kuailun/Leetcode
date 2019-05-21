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
ListNode* deleteDuplicates(ListNode* head);

int main()
{
	ListNode *head,*input=new ListNode(0);
	head = input;
	input->next = new ListNode(1);
	input = input->next;
	input->next = new ListNode(1);
	input = input->next;
	input->next = new ListNode(2);
	input = input->next;

	ListNode *output;

	output = deleteDuplicates(head);
	std::cout << output;

	system("pause");
}

ListNode* deleteDuplicates(ListNode* head)
{
	if (!head)
	{
		return NULL;
	}
	vector<int> stash;
	ListNode* node = head,*current=head;
	int flag = false;
	while (head)
	{
		flag = false;
		for (int i = 0; i < stash.size(); i++)
		{
			if (stash[i] == head->val)
			{
				flag = true;
			}
		}
		if (!flag)
		{
			stash.push_back(head->val);
		}
		head = head->next;
	}

	current->val = stash[0];
	for (int i = 1; i < stash.size(); i++)
	{
		current = current->next;
		current->val = stash[i];		
	}
	current->next= NULL;
	return node;

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
