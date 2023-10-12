#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the values: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    map <int , int> mp;
    //Pre compute

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    // for( auto i:mp )
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    cout<<"Enter a number for loop: "<<endl;
    cin>>n;

    while (n--)
    {
        int number;
        cout<<"Enter a number to be found: "<<endl;
        cin>>number;
        cout<<mp[number]<<endl;
    }
    
    
    return 0;
}