//A program to insert and delete elements in an array...
//Language : C++

#include<iostream>

using namespace std;

int main()
{
    int n, i, j, k, item, menu;
    
    cout<<"Enter Number of Elements : ";
    cin>>n;
    
    int arr[n];
    
    cout<<"ENTER YOUR ARRAY: ";
    
    for(i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter your choice(1= insert, 2 = delete):";
    cin>>menu;
    
    if(menu == 1)
    {
        cout<<"Enter position to insert: ";
        cin>>k;
        cout<<"Enter Number to insert: ";
        cin>>item;
        j = n;
        while(j>=k-1)
        {
            arr[j+1]=arr[j];
            j = j-1;
        }
        arr[k-1] = item;
        n = n+1;
        cout <<"After Insert:";
        for(i = 0; i < n ; i++)
        {
            cout<<" "<<arr[i];
        }
    }
    
    if(menu == 2)
    {
        cout<<"Enter position to delete: ";
        cin>>k;
        cout<<"Enter Number to delete: ";
        cin>>item;
        item = arr[k-1];
        for(j = k-1; j <= n-1; j++)
        {
            arr[j]=arr[j+1];

        }

        n = n - 1;
        cout <<"After Delete:";
        for(i = 0; i < n ; i++)
        {
            cout<<" "<<arr[i];
        }
    }

}
