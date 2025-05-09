#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    char *token = strtok(s, " \n");

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " \n");
    }

    
    return 0;
}