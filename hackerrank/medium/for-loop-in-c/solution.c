#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d%d", &n, &m);

    const char *words[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    for (int i = n; i <= m; i++) {
        if (i >= 0 && i <= 9) {
            printf("%s\n", words[i]);
        } else if (i > 9 && i % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}


