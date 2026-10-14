#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");
    wchar_t primero[100];
    wchar_t segundo[100];
    wchar_t tercero[100];
    wscanf(L"%ls\n%ls\n%ls", primero, segundo, tercero);
    wprintf(L"%-15ls|%20ls|%.5ls", primero, segundo,tercero);
    return 0;
}