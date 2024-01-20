//valid {[{}]} parentheses  or not....????

// #include <iostream>
// using namespace std;
// #include <stack>
// #include <string>

// bool Parentheses(string& str) {
//     stack<char> Stack;

//     for (char ch : str) {
//         if (ch == '(' || ch == '{' || ch == '[') {
//             Stack.push(ch);
//         }
//          else if (ch == ')' || ch == '}' || ch == ']')
//           {
//             if (Stack.empty())
//              {
//                 return false;
//             }
//             char top = Stack.top();
//             Stack.pop();

//             if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '['))
//              {
//                 return false;
//             }
//         }
//     }
//     return Stack.empty();
// }

// int main() {
//     string input;
//     cout << "Enter a string containing parentheses: ";
//     cin >> input;
//     if (Parentheses(input)) {
//         cout << "The parentheses are balanced.\n";
//     } else {
//         cout << "The parentheses are not balanced.\n";
//     }
//     return 0;
// }
//=======================================================practice========================================================//
#include<iostream>
using namespace std;
#include<stack>
#include<string>

bool parentheses(string &str)
{
    stack<char>stack;

    for(char ch:str)
    {
        if(ch=='('||ch=='{'|| ch=='[')
        {
            stack.push(ch);
        }
        else if(ch==')'||ch=='}'||ch==']')
        {
            if(stack.empty())
            {
                return false;
            }
            char top = stack.top();
            stack.pop();
            if((ch==')' && top!='(')||(ch=='}'&& top !='{')||(ch==']'&& top !='['))
            {
                return false;
            }
        }
    }
    return stack.empty();
}

int main()
{
    string input;
    cout<<"Enter the string Contais parentheses\n";
    cin>>input;

    if(parentheses(input))
    {
        cout<<"parentheses is balanced";
    }
    else{
        cout<<"parentheses not balanced";
    }
    return 0;
}