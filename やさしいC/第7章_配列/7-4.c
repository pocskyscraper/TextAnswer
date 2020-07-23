/*
キーボードから文字列を入力させ、文字列にいくつ「a」という文字が含まれるのかを調べるコードを記述してください。

文字列を入力してください。
algebra
algebraの中にはaは2個あります。
*/

#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    printf("文字列を入力してください。\n");

    char str[MAX_LENGTH];
    scanf("%s", str);

    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'a') {
            ++count;
        }
    }

    printf("%sの中にはaは%d個あります。", str, count);

    return 0;
}