#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
#include <stack>
#include <queue>
using namespace std;

class MyStack {
public:
	/** initialize your data structure here. */
	MyStack() {

	}

	void push(int x) {
		mQ.push(x);
	}

	int pop() {
		int temp = mQ.front();
		mQ.pop();

		for (int i = 0; i < mQ.size(); i++)
		{
			mQ.push(temp);
			temp = mQ.front();
			mQ.pop();
		}
		return temp;
	}

	int top() {
		return mQ.back();
	}

	bool empty() {
		return mQ.empty();
	}

private:
	queue<int> mQ;
};


int main()
{
	MyStack input;
	input.push(1);
	input.push(2);
	input.top();
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