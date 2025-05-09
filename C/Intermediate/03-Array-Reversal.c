#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    

    int p=0;
    int q=num-1;
    
    while(p<q)
    {
        int temp = arr[p];
        arr[p] = arr[q];
        arr[q] =temp;
        p++;
        q--;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}