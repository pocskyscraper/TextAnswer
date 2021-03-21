/*
キーボードから整数値を入力させ、場合に応じて次のようなメッセージを出力するコードを記述してください。

値が偶数だった場合 ⇒ nは偶数です。
値が奇数だった場合 ⇒ nは奇数です。
(ただし、nは入力した整数)

整数を入力してください。
1
1は奇数です。
*/

#include <iostream>
#include <string>

int main() {
    std::cout << "整数を入力してください。" << std::endl;

    int value;
    std::cin >> value;

    std::string str = (value % 2 == 0) ? "偶数" : "奇数";
    std::cout << value << "は" << str << "です。" << std::endl;

    return 0;
}