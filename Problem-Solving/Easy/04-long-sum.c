#include <stdio.h>
#include <limits.h>



int main() {
    
    int n;
    scanf("%d",&n);
    int arr[n];
    long sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum +=arr[i];
    }

    printf("%ld",sum);
    return 0;
}
