/*
次のように画面に出力するコードを記述してください。

アルファベットの最初の文字はなんですか？
a
アルファベットの最初の文字はaです。
*/

#include <iostream>

int main() {
    std::cout << "アルファベットの最初の文字はなんですか？" << std::endl;

    char character;
    std::cin >> character;

    std::cout << "アルファベットの最初の文字は" << character << "です。"
              << std::endl;

    return 0;
}