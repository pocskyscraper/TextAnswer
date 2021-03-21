/*
キーボードからテストの点数を入力させ、その合計点を出力するコードを記述してください。
最後に答えを出力させる場合には、0を入力するものとします。

テストの点数を入力してください。
52
68
75
83
36
0
テストの合計点は314点です。
*/

#include <iostream>

int main() {
    std::cout << "テストの点数を入力してください。" << std::endl;

    int score = 0;
    int total = 0;
    do {
        std::cin >> score;
        total += score;
    } while (score != 0);

    std::cout << "テストの合計点は" << total << "点です。";

    return 0;
}