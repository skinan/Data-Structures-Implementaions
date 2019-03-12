#include<stdio.h>

using namespace std;
int main()
{   int i, n, z = 0, x;

    printf("Enter array length = ");
    scanf("%d",&x);

    int arr[x] = {};
    //Get the array of elements
    for(i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter Search Element : ");
    scanf("%d", &n);

    //loop for searching the element
    for(i = 0; i < x; i++)
    {
        if(n == arr[i])
        {   z = 1;
            break;
        }
    }
    if(z == 1)
        printf("Number found at position %d \n", i + 1);
    else
        printf("Number not found\n");

        return 0;
}
