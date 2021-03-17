/*
文字列中に含まれている文字「a」の個数を調べる関数
int search(char str[])を作成してください。
実際に文字列を入力して個数を調べるコードを記述してください。

文字列を入力してください。
algebra
algebraの中にaは2個あります。
*/

#include <stdio.h>

int search(char str[]);

int main() {
    printf("文字列を入力してください。\n");

    char str[128];
    scanf("%s", str);

    printf("%sの中にaは%d個あります。", str, search(str));

    return 0;
}

int search(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'a') {
            ++count;
        }
    }
    return count;
}