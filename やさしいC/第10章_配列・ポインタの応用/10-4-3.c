/*
文字列を比較する関数int compare(char str1[], char str2[])を作成してください。
文字列1と文字列2を比較して、一致した場合には1、そうでない場合には-1を返すものとします。
実際にキーボードから文字列を入力して文字列を比較するコードを記述してください。
ただし、ポインタ演算を用いてください。

1番目の文字列を入力してください。
Hello
2番目の文字列を入力してください。
Goodbye
2つの文字列は異なります。
*/

#include <stdio.h>

int compare(char str1[], char str2[]);

int main() {
    printf("1番目の文字列を入力してください。\n");
    char str1[128];
    scanf("%s", str1);

    printf("2番目の文字列を入力してください。\n");
    char str2[128];
    scanf("%s", str2);

    printf("2つの文字列は%s",
           compare(str1, str2) == 1 ? "一致します。" : "異なります。");

    return 0;
}

int compare(char str1[], char str2[]) {
    for (int i = 0; *(str1 + i) != '\0'; ++i) {
        if (*(str1 + i) != *(str2 + i)) {
            return -1;
        }
    }
    return 1;
}