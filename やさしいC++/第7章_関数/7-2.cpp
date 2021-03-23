/*
1のコードに、double型の数値を2乗する関数
double square(double x)を追加してください。
次のようにキーボードから入力した整数・小数の2乗を出力するコードを記述してください。

整数を入力してください。
5
5の2乗は25です。
小数を入力してください。
1.5
1.5の2乗は2.25です。
*/

#include <iostream>

int square(int x);
double square(double x);

int main() {
    std::cout << "整数を入力してください。" << std::endl;
    int value = 0;
    std::cin >> value;

    std::cout << value << "の2乗は" << square(value) << "です。" << std::endl;

    std::cout << "小数を入力してください。" << std::endl;
    double value2 = 0;
    std::cin >> value2;

    std::cout << value2 << "の2乗は" << square(value2) << "です。";

    return 0;
}

int square(int x) { return x * x; }

double square(double x) { return x * x; }