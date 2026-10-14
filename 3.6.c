#include <string.h>
#include <stdio.h>

int main() {
    int width;
    char text[10];
    scanf("%d %s", &width, text);
    printf("%*s\n", width, text);
    printf("%-*s\n", width, text);
    return 0;
}