//Binary Search Operation Using Inputs From A File And Showing Output To Another File.

#include<stdio.h>

int main()
{
    int n,i;
    int search;
    
    FILE *fptr,*optr;

    fptr = fopen("input_file.txt", "r");
    optr = fopen("output_file.txt","w");

    fscanf(fptr,"%d", &n);

    int arr[n];

    for(i=0; i<n; i++)
    {
        fscanf(fptr,"%d", &arr[i]);
    }



        int f=0;
            int l=n;
                int m;
    fscanf(fptr,"%d", &search);

    while(f<=l)
    {
        m = (f + l)/2;
        if(arr[m] == search)
        {
            fprintf(optr, "Match found at position %d\n", m + 1);
            break;
        }
        else if(arr[m] < search)
        {
            f = m + 1;
        }
        else
        {
            l = m - 1;
        }
    }
    if(f > l)
    {
        fprintf(optr, "No match found\n");
    }


    fclose(fptr);
    fclose(optr);
}



