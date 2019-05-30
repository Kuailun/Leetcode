#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {
public:
	/** Initialize your data structure here. */
	MyQueue() {

	}

	/** Push element x to the back of queue. */
	void push(int x) {
		mS.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		int ret;
		int si = mS.size();
		for (int i = 0; i < si - 1; i++)
		{
			temp.push(mS.top());
			mS.pop();
		}
		ret=mS.top();
		mS.pop();
		si = temp.size();
		for (int i = 0; i < si; i++)
		{
			mS.push(temp.top());
			temp.pop();
		}
		return ret;
	}

	/** Get the front element. */
	int peek() {
		int si = mS.size();
		int ret;
		for (int i = 0; i < si - 1; i++)
		{
			temp.push(mS.top());
			mS.pop();
		}
		ret = mS.top();
		si = temp.size();
		for (int i = 0; i < si; i++)
		{
			mS.push(temp.top());
			temp.pop();
		}
		return ret;
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		return mS.empty();
	}
private:
	stack<int> mS;
	stack<int> temp;
};



int main()
{
	MyQueue input;
	input.push(1);
	input.push(2);
	input.push(3);
	input.peek();
	input.pop();
	input.empty();

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