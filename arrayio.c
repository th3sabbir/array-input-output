#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100];
    int size;
    scanf("%d", &size);
    printf("Enter your integer: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

    }
    printf("After storing: ");
    for (int i=0; i<size; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
