#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>//Library header to fetch "sort" function of C++

using namespace std;

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    //Get the array of elements
    int arr[n] = {};
    
    printf("Enter the array elements:\n ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
     
    sort(arr, arr+n);//built in "sort" function of C++ to sort in ascending order
    
    int y;
    printf("Enter The Element to search : ");
    scanf("%d", &y);
    
    int l = 0; // l = Lower Index
    int h = n; // h = Higher Index
    int m; // m = Middle Index
    
    //start of binary searching loop
    while(l <= h)
    {
        m = (l + h)/2;
        if(y == arr[m])
        {
            break;
        }
        if(y < arr[m])
        {
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    if(l > h)
    {
        printf( "%d not found\n", y);
    }
    else
    {
        printf( "%d found at %d\n", y, m + 1);
    }
}
