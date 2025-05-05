#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(2);
    s.push(5);
    s.push(7);

    s.pop();

    cout << "The topmost element on the stack is " << s.top() << endl;

    if (s.empty())
    {
        cout << "The stack is empty " << endl;
    }
    else
    {
        cout << "The stack is not empty " << endl;
    }
    cout << "The size of the stack is " << s.size() << endl;

    return 0;
}