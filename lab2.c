#include<stdio.h>

int swap (int *a , int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a , b ;

    printf("Enter your values \n");
    scanf("%d  %d", &a, &b);

    printf("Before Swaping \n");
    printf("a = %d b = %d \n", a, b);

    swap(&a, &b);

    printf("After Swaping \n");
    printf("a = %d b = %d", a, b);

    return 0;

}

