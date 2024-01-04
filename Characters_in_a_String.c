#include <stdio.h>

int main() {
    char str[100];

    
    scanf("%99[^
]", str);

    int count = 0;

    while (str[count] != NULL) {
        count++;
    }

    printf("%d
", count);

    return 0;
}
