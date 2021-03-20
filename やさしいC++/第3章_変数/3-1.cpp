/*
次のように画面に出力するコードを記述してください。

円周率の値はいくつですか？
3.14
円周率の値は3.14です。
*/

#include <iostream>

int main() {
    std::cout << "円周率の値はいくつですか？" << std::endl;

    double pi;
    std::cin >> pi;

    std::cout << "円周率の値は" << pi << "です。" << std::endl;

    return 0;
}