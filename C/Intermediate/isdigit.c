#include <stdio.h>
#include <string.h>
#include <ctype.h>  

int main() {
    char str[1000];
    int count[10] = {0};

    fgets(str, sizeof(str), stdin);
    
    
    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            count[str[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", count[i]);
    }
    
    return 0;
}
