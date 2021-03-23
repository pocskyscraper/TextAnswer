/*
文字列に指定した文字がいくつあるかを調べる関数
int count(char str[], char ch)を作成してください。
実際にキーボードから文字列を入力して文字の個数を調べるコードを記述してください。

文字列を入力してください。
Hello
文字列から探す文字を入力してください。
l
Helloの中にlは全部で2個あります。
*/

#include <iostream>

int count(char str[], char ch);

int main() {
    std::cout << "文字列を入力してください。" << std::endl;
    char str[128];
    std::cin >> str;

    std::cout << "文字列から探す文字を入力してください。" << std::endl;
    char character;
    std::cin >> character;

    std::cout << str << "の中に" << character << "は全部で"
              << count(str, character) << "個あります。" << std::endl;

    return 0;
}

int count(char str[], char ch) {
    int total = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ch) {
            ++total;
        }
    }
    return total;
}