#include <stdio.h>

int main() {
    FILE *old, *dest;
    char source[50], destination[50];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", destination);

    old = fopen(source, "r");
    if (old == NULL) {
        printf("Ouchh!! Error opening source file!\n");
    }

    dest = fopen(destination, "a");
    if (dest == NULL) {
        printf("Awwww!! Error opening destination file!\n");
    }

    while ((ch = fgetc(old)) != EOF) {
        fputc(ch, dest);
    }

    fclose(old);
    fclose(dest);

    dest = fopen(destination, "r");
    if (dest == NULL) {
        printf("Error reopening destination file!\n");
    }

    printf("\nLowercase \n");

    while ((ch = fgetc(dest)) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;   
        }
        putchar(ch);
    }

    fclose(dest);

}