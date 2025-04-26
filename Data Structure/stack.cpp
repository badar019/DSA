#include <iostream>  // include iostream library for input and output
#include <stack>     // include stack library for stack operations
#include <vector>    // include vector library for dynamic arrays
#include <algorithm> // include algorithm library for sorting
using namespace std; // use standard namespace
class Stack
{
private:
    vector<int> arr; // vector to store stack elements
    int top;         // variable to keep track of the top element
public:
    Stack() : top(-1) {} // constructor to initialize top to -1

    void push(int x)
    {                     // function to push an element onto the stack
        arr.push_back(x); // add element to the end of the vector
        top++;            // increment top index
    }

    void pop()
    { // function to pop an element from the stack
        if (top >= 0)
        {                   // check if stack is not empty
            arr.pop_back(); // remove last element from vector
            cout << arr[top] << " is Popped" << endl;
            top--;          // decrement top index
        }
        else
        {
            cout << "Stack is empty" << endl; // print message if stack is empty
        }
    }

    int peek()
    { // function to get the top element of the stack
        if (top >= 0)
        {                    // check if stack is not empty
            return arr[top]; // return top element
        }
        else
        {
            cout << "Stack is empty" << endl; // print message if stack is empty
            return 0;                       // return -1 if stack is empty
        }
    }

    bool isEmpty()
    {                       // function to check if stack is empty
        return (top == -1); // return true if top index is -1, false otherwise
    }
};
int main()
{
    Stack s;           // create a stack object
    int choice, value; // variables to store user choice and value
    do
    {
        cout << "1. Push\n2. Pop\n3. Peek\n4. Check if empty\n5. Exit\n"; // display menu
        cout << "Enter your choice: ";                                    // prompt user for choice
        cin >> choice;                                                    // read user choice

        switch (choice)
        {                                    // switch case to handle user choice
        case 1:                              // push operation
            cout << "Enter value to push: "; // prompt user for value
            cin >> value;                    // read value
            s.push(value); 
            cout << value << " is pushed to stack." << endl;                 // push value onto stack
            break;
        case 2:      // pop operation
            s.pop(); // pop top element from stack
            break;
        case 3:                                             // peek operation
            cout << "Top element is: " << s.peek() << endl; // display top element
            break;
        case 4: // check if empty operation
            if (s.isEmpty())
            {                                     // check if stack is empty
                cout << "Stack is empty" << endl; // print message if empty
            }
            else
            {
                cout << "Stack is not empty" << endl; // print message if not empty
            }
            break;
        case 5:                           // exit operation
            cout << "Exiting..." << endl; // print exit message
            break;
        default:                                                 // invalid choice handling
            cout << "Invalid choice, please try again." << endl; // print error message
        }
    } while (choice != 5); // repeat until user chooses to exit
    return 0; // return 0 to indicate successful execution
}