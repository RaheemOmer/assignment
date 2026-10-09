#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    const char *words[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    if (n >= 0 && n <= 9) {
        printf("%s\n", words[n]);
    } else {
        printf("Greater than 9\n");
    }

    return 0;
}
