#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a string:";
    getline(cin, s);

    string filtered;

    for (char ch :s)
    {
        if(isalnum(ch))
        {
            filtered+=tolower(ch);
        }
    }
    

    int left =0;
    int right = filtered.size()- 1;
    int temp=0;

    while(left<right)
    {
       
        if(filtered[left]!=filtered[right])
        {
            temp=1;
            break;
        }
        left++;
        right--;
    }

    if(temp==0)
        cout<<"True";

    else
        cout<<"False";

    return 0;

}