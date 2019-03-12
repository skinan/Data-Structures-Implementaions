//Finding error of a binary message

#include<stdio.h>

using namespace std;

int main()
{
    int x, y, i, j;
    int z = 0;
    //Get the message in matrix form 
    printf("Enter the number of Rows = ");
    scanf("%d", &x);
    printf("Enter the number of Column = ");
    scanf("%d", &y);

    //declaring to arrays for comparing original and received message
    int arr[x][y] = {};
    int arra[x][y] = {};
    
    printf("Enter the sent message :\n");
    for(i = 0; i < x; i++)
    {
        for(j = 0;j < y; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Enter the received message :\n");
    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
        {
            scanf("%d",&arra[i][j]);
        }
    }
    
    //compare to aarrays
    for(i = 0; i<x; i++)
    {
        for(j = 0;j < y; j++)
        {
            if(arr[i][j] == arra[i][j])
                continue;
            else
                printf("Error found at position %d%d \n",i,j);
            z = z + 1;
        }
    }
    if(z == 0)
        printf("No error found");
}
