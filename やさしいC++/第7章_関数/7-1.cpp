/*
int型の数値を2乗した値を返す関数int square(int x)を作成し、
次のようにキーボードから入力した整数の2乗を出力するコードを記述してください。

整数を入力してください。
5
5の2乗は25です。
*/

#include <iostream>

int square(int x);

int main() {
    std::cout << "整数を入力してください。" << std::endl;
    int value = 0;
    std::cin >> value;

    std::cout << value << "の2乗は" << square(value) << "です。";

    return 0;
}

int square(int x) { return x * x; }