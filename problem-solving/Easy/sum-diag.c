#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n,left=0,right=0;
    scanf("%d",&n);
    
    int arr[n][n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        left += arr[i][i];
        right += arr[i][n-i-1];
    }
    printf("%d",abs(left-right));
    
    return 0;
}







// Dynamic array

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int *arr = (int *)malloc(n * n * sizeof(int));

//     for (int i = 0; i < n * n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int left = 0, right = 0;
//     for (int i = 0; i < n; i++) {
//         left += arr[i * n + i];           
//         right += arr[i * n + (n - i - 1)];
//     }

//     printf("%d\n", abs(left - right));

//     free(arr);
//     return 0;
// }
