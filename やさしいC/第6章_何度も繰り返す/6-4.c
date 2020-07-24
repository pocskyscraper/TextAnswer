/*
次のように画面に出力するコードを記述してください。
1
12
123
1234
12345
*/

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            printf("%d", j + 1);
        }
        printf("\n");
    }

    return 0;
}