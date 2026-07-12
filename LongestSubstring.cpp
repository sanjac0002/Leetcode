#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string:" << endl;
    cin>> s;

    unordered_set<char> charSet;
    int maxlength = 0;
    int left = 0;
    int right = 0;

    for (int right =0; right <s.length(); right ++)
    {
        while (charSet.find(s[right]) != charSet.end())
        {
            charSet.erase(s[left]);
            left ++;
        }

        charSet.insert(s[right]);
        maxlength = max(maxlength, right - left +1);
    }

    cout <<"Max length of substring:" << maxlength;
    return 0;

}