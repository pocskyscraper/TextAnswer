/*
次のように画面に出力するコードを記述してください。
1～10までの偶数を出力します。
2
4
6
8
10
*/

#include <iostream>

int main() {
    std::cout << "1～10までの偶数を出力します。" << std::endl;

    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}