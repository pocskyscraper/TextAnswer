/*
次の計算結果を出力するコードを記述してください。

0 - 4
3.14 * 2
5 / 3
30 mod 7
(7 + 32) / 5
*/

#include <iostream>

int main() {
    std::cout << 0 - 4 << std::endl;
    std::cout << 3.14 * 2 << std::endl;
    std::cout << static_cast<double>(5) / static_cast<double>(3) << std::endl;
    std::cout << 30 % 7 << std::endl;
    std::cout << static_cast<double>(7 + 32) / static_cast<double>(5)
              << std::endl;

    return 0;
}