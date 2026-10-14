#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");
    wchar_t name[100];
    wscanf(L"%ls", name);
    wprintf(L"Агент %ls авторизован в системе", name);
    return 0;
}