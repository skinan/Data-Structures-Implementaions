#include <stdio.h>

using namespace std;

int main()
{
    int n, i, j, tmp;
    
    printf("Enter Number of Elements = ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter Array Elements \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0 ; i < n; i++)
    {
        arr[i] = arr[i] + 2;
    }

    printf("After Traversing  Array: \n");
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
