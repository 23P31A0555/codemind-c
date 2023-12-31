#include <stdio.h>
#include <string.h>

int countWords(char str[]) {
    int count = 0;
    int i;

    for (i = 0; str[i] != NULL; i++) {
        
        if (str[i] == ' ' || str[i] == '
') {
            count++;
        }
    }

    
    return count + 1;
}

int main() {
    char inputString[1000];

    
    fgets(inputString, sizeof(inputString), stdin);

    
    inputString[strcspn(inputString, "
")] = NULL;

    int result = countWords(inputString);
    printf("%d
", result);

    return 0;
}

