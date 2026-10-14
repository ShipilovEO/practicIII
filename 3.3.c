#include <string.h>
#include <stdio.h>

int main() {
    char name[100];
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"     %s     \"\n", name);
    return 0;
}