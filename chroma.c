#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2)
        printf("Usage: chroma [path]\n");
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
        return 1;

    int c;

    while ((c = fgetc(file)) != EOF) {
        switch(c) {
            case 0:
                printf("\033[0;40m ");
            case 1:
                printf("\033[0;41m ");
            case 2:
                printf("\033[0;42m ");
            case 3:
                printf("\033[0;43m ");
            case 4:
                printf("\033[0;44m ");
            case 5:
                printf("\033[0;45m ");
            case 6:
                printf("\033[0;46m ");
            case 7:
                printf("\033[0;47m ");
            case 8:
                printf("\033[0;40;1m ");
            case 9:
                printf("\033[0;41;1m ");
            case 10:
                printf("\033[0;42;1m ");
            case 11:
                printf("\033[0;43;1m ");
            case 12:
                printf("\033[0;44;1m ");
            case 13:
                printf("\033[0;45;1m ");
            case 14:
                printf("\033[0;46;1m ");
            case 15:
                printf("\033[0;47;1m ");
        }
    }

    fclose(file);
    printf("\n");
}