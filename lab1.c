#include<stdio.h>

int main(){

    int *ptr;
    int n;

    printf("Enter Array size ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements \n ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n");



    ptr = arr;

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d \n", i, *(ptr + i));
    }

    printf("\n");
    printf("The Square of each elements are \n");
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d \n", i, *(ptr + i)**(ptr + i));
    }

    return 0;

}