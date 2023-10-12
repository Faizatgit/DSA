#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: "<<endl;
    cin>>str;

    int hash[26] =  {0};
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i] - 'a']++;
    }

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    while (n--)
    {
        char ch;
        cout<<"Enter a character: "<<endl;
        cin>>ch;
        cout<<ch<<" "<<hash[ch - 'a']<<endl;
    }
    

    return 0;
}