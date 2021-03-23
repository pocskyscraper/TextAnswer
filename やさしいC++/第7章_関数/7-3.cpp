/*
2のコードで、2つの関数をインライン関数として記述してください。
*/

#include <iostream>

inline int square(int x) { return x * x; }

inline double square(double x) { return x * x; }

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