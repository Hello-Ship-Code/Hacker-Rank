#include<stdio.h>

int main(){
    
    char c,st[100],se[100];
    
    scanf("%c",&c);
    getchar();
    scanf("%[^\n]",st);
    getchar();
    fgets(se,sizeof(se),stdin);
    
    printf("%c\n",c);
    printf("%s\n",st);
    printf("%s",se);
    
    return 0;
}