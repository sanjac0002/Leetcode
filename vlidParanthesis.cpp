#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main()
{
    string s;
    cout <<" Enter the string of paranthesis: ";
    cin>>s;

    stack<char> st;

    for( char ch: s)
    {
        if (ch == '(' || ch == '[' || ch =='{')
        {
            st.push(ch);            
        }
        else
        {
            if(st.empty())
            {
                cout << "False";
                return 0;
            }

            char top = st.top();

            if (ch == ')' && top != '(') 
            { 
                cout << "False"; 
                return 0; 
            }
            if (ch == ']' && top != '[') 
            { 
                cout << "False"; 
                return 0; 
            }
            if (ch == '}' && top != '{') 
            { 
                cout << "False"; 
                return 0; 
            }
            
            st.pop();
        }
    }

    if(st.empty())
        cout << "True";
    else
        cout << "False";


    return 0;

}