#include <stdio.h>
#include<stdlib.h>


int main() 
{

    int n;
    scanf("%d", &n);
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int val = (abs(n-i-1) > abs(n-j-1)? abs(n-i-1) : abs(n-j-1));
            printf("%d ",val +1);
        }
        printf("\n");
    }
    return 0;
}