/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(a[i]<=max)
        {
            b[i]=max+1-a[i];
        }
        else
        {
            b[i]=0;
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n-1;i++)
    {
        cout<<b[i];
        cout<<" ";
    }
    cout<<"0";
    return 0;
}