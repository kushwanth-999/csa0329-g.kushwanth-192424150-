#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int valid = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        if (!(isalnum(str[i]) || str[i] == '_')) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid string: \n");
    else
        printf("Invalid string: \n");

    return 0;
}
