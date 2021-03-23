/*
与えられた型の数値を2乗する関数テンプレート
template <class T> T squaret(T x)を作成してください。
int型、double型の数値を入力して、2乗を出力するコードを記述してください。
*/

#include <iostream>

template <class T>
T squaret(T x) {
    return x * x;
}

int main() {
    std::cout << "整数を入力してください。" << std::endl;
    int value;
    std::cin >> value;
    std::cout << "2乗の値は" << squaret(value) << "です。" << std::endl;

    std::cout << "小数を入力してください。" << std::endl;
    double value2;
    std::cin >> value2;
    std::cout << "2乗の値は" << squaret(value2) << "です。" << std::endl;

    return 0;
}