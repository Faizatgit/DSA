#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: "<<endl;
    cin>>str;

    int hash[256] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        hash[(int)str[i]]++;
    }
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    while (n--)
    {
        char ch;
        cout<<"Enter character: "<<endl;
        cin>>ch;
        cout<<ch<<" "<<hash[(int)ch]<<endl;
    }
    return 0;
}