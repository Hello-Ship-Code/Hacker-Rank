#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void find_nth_term(int n, int a, int b, int c) {

    int arr[21];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    
    for(int i=3;i<n;i++)
    {
        arr[i]=arr[i-1] + arr[i-2] + arr[i-3];
    }

    printf("%d",arr[n-1]);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    find_nth_term(n, a, b, c);
 
    return 0;
}