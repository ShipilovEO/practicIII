#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <stdio.h>


int main() {
    setlocale(LC_ALL, "");
    const char *str1 = "Сбой матрицы";
    const wchar_t *str2 = L"Сбой матрицы";
    printf("char -> sizeof: %ld bytes, strlen: %ld chars\n", (strlen(str1) + 1) * sizeof(char), strlen(str1));
    printf("wchar -> sizeof: %ld bytes, wclen: %ld chars", (wcslen(str2) + 1) * sizeof(wchar_t), wcslen(str2));
    return 0;
}