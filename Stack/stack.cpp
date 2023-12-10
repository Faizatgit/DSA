#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int size;
    int *arr;

public:
    Stack()
    {
        top = -1;
        size = 1000;
        arr = new int[size];
    }

    void push(int x)
    {
        top++;
        arr[top] = x;
    }

    int pop()
    {
        int x = arr[top];
        top--;
        return x;
    }
    int top1()
    {
        int x = arr[top];
        return x;
    }
    int isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    int size1()
    {
        int x = top + 1;
        return x;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout << "Popped Element: " << st.pop() << endl;
    cout << "Popped Element: " << st.pop() << endl;
    cout << "Popped Element: " << st.pop() << endl;
    cout << "Size of stack: " << st.size1() << endl;
    cout << "Topmost element of the stack: " << st.top1() << endl;
    cout << "Isempty stack? " << st.isEmpty() << endl;
    return 0;
}
