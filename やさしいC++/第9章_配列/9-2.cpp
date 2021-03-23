/*
文字列の長さを調べる関数int length(char* str)を作成してください。
実際にキーボードから文字列を入力して文字列の長さを調べるコードを記述してください。

文字列を入力してください。
Hello
文字列の長さは5です。
*/

#include <iostream>

int length(char* str);

int main() {
    std::cout << "文字列を入力してください。" << std::endl;
    char str[128];
    std::cin >> str;

    std::cout << "文字列の長さは" << length(str) << "です。" << std::endl;

    return 0;
}

int length(char* str) {
    int i;
    for (i = 0; str[i] != '\0'; ++i) {
    }
    return i;
}