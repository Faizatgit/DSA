#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl<<"Enter the values:  ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    //Pre compute

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    
    int q;
    cout<<"Enter the vaue of q: "<<endl;
    cin>>q;
    cout<<"Elements and there occurance are: "<<endl;

    while (q--)
    {
        int number;
        cout<<"Enter a number: "<<endl;
        cin>>number;

        cout<<hash[number]<<endl;
    }
    
    return 0;
}

