/*
次のように高さと底辺を入力して、三角形の面積を出力するコードを記述してください。

三角形の高さを入力してください。
3
三角形の底辺を入力してください。
5
三角形の面積は7.5です。
*/

#include <iostream>

int main() {
    std::cout << "三角形の高さを入力してください。" << std::endl;
    int height;
    std::cin >> height;

    std::cout << "三角形の底辺を入力してください。" << std::endl;
    int edge;
    std::cin >> edge;

    std::cout << "三角形の面積は" << edge * height * 0.5 << "です。"
              << std::endl;
    return 0;
}