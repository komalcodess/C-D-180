#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *ptr1, *ptr2, *res;
    int k, m;

    printf("Enter size of first string: ");
    scanf("%d", &k);
    ptr1 = (char *)malloc((k + 1) * sizeof(char));

    if (ptr1 == NULL) {
        printf("Memory allocation failed!\n");
    } 
    else {
        printf("Enter first string: ");
        scanf("%s", ptr1);

        printf("Enter size of second string: ");
        scanf("%d", &m);
        
        ptr2 = (char *)malloc((m + 1) * sizeof(char));

        if (ptr2 == NULL) {
            printf("Memory allocation failed!\n");
        } 
        else {
            printf("Enter second string: ");
            scanf("%s", ptr2);

            res = (char *)malloc((strlen(ptr1) + strlen(ptr2) + 1) * sizeof(char));

            if (res == NULL) {
                printf("Memory allocation failed!\n");
                free(ptr1);
                free(ptr2);
            } 
            else {
                strcpy(res, ptr1);
                strcat(res, ptr2);

                printf("Concatenated string: %s\n", res);

                free(ptr1);
                free(ptr2);
                free(res);
            }
        }
    }

    return 0;
}