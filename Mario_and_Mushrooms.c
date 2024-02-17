#include <stdio.h>

enum Size { SMALL, NORMAL, HUGE };

enum Size transform(enum Size current_size) {
    if (current_size == SMALL)
        return NORMAL;
    else if (current_size == NORMAL)
        return HUGE;
    else
        return SMALL;
}

int main() {
    int num_mushrooms;
    scanf("%d", &num_mushrooms);

    enum Size mario_size = NORMAL;
    for (int i = 0; i < num_mushrooms; ++i) {
        mario_size = transform(mario_size);
    }
    if (mario_size == SMALL)
        printf("SMALL
");
    else if (mario_size == NORMAL)
        printf("NORMAL
");
    else
        printf("HUGE
");

    return 0;
}
