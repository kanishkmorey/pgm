#include <stdio.h>
int main() {
    char str[1000], ch = 'a';
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of a = %d\n", count);
    return 0;
}