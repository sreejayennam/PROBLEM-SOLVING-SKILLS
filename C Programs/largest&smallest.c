#include <stdio.h>
int main()
{
    int arr[50],n,i,smallest,largest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        if (arr[i] < arr[i+1])
        {
            smallest= arr[i];
        }

        if (arr[i] > arr[i+1])
        {
            largest=arr[i];
        }
    }
    printf("\nLargest element is : %d", largest);
    printf("\nSmallest element is : %d", smallest);

    return 0;
}
