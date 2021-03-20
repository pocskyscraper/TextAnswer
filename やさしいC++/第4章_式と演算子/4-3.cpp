/*
キーボードから5科目のテストの点数を入力して、
次のように合計値と平均値を出力するコードを記述してください。

科目1の点数を入力してください。
52
科目2の点数を入力してください。
68
科目3の点数を入力してください。
75
科目4の点数を入力してください。
83
科目5の点数を入力してください。
36
5科目の合計点は314点です。
5科目の平均点は62.8点です。
*/

#include <iostream>

int main() {
    int scores[5];
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        std::cout << "科目" << i + 1 << "の点数を入力してください。"
                  << std::endl;
        std::cin >> scores[i];
        sum += scores[i];
    }

    std::cout << "5科目の合計点は" << sum << "点です。" << std::endl;
    std::cout << "5科目の平均点は"
              << static_cast<double>(sum) / static_cast<double>(5) << "点です。"
              << std::endl;

    return 0;
}