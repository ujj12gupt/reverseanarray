#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mid1,mid2;
    cout<<"please tell numbers of elements in an array"<<"\n";
    cin>>n;
    if(n%2 == 0)
    {
        mid1 = n/2-1;
        mid2 = n/2;
    }
    else
    {
        mid1 = mid2 = (n+1)/2-1;
    }
    int arr[n];
    cout<<"enter elements of array"<<"\n";
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"array before reversal"<<"\n";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(int i = 0; i < mid1; i++)
    {
        int temp = arr[i];
        arr[i] = arr[mid2 + mid1 - i];
        arr[mid2+mid1-i] = temp;
    }
    cout<<"array after reversal"<<endl;
    for(int i = 0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}