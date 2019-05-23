#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
#include <stack>
using namespace std;

class MinStack {
public:
	/** initialize your data structure here. */
	MinStack() {

	}

	void push(int x) {
		_stk.push(x);

		if (_minStk.empty() || x <= _minStk.top())
		{
			_minStk.push(x);
		}
	}

	void pop() {
		if (!_minStk.empty() && _stk.top() == _minStk.top())
		{
			_minStk.pop();
		}

		if (!_stk.empty())
		{
			_stk.pop();
		}

	}

	int top() {
		return !_stk.empty() ? _stk.top() : 0;
	}

	int getMin() {
		return !_minStk.empty() ? _minStk.top() : 0;
	}

private:
	stack<int> _stk;
	stack<int> _minStk;
};


int main()
{
	MinStack input;
	input.push(1);
	input.push(2);
	input.top();
	input.getMin();
	input.pop();
	input.getMin();

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