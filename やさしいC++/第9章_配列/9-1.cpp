/*
5つの要素を持つ配列を受け取り、その最大値を返す
int max(int x[])関数を定義してください。
max()関数を使い、キーボードから学生の数とテストの点数を入力させ、
最高点を出力するコードを記述してください。

テストの点数を入力してください。
50
20
35
68
75
最高点は75点です。
*/

#include <iostream>

int max(int x[]);

int main() {
    std::cout << "テストの点数を入力してください。" << std::endl;

    int scores[5];
    for (int i = 0; i < 5; ++i) {
        std::cin >> scores[i];
    }

    std::cout << "最高点は" << max(scores) << "点です。" << std::endl;

    return 0;
}

int max(int x[]) {
    int max = 0;
    for (int i = 0; i < 5; ++i) {
        if (x[i] > max) {
            max = x[i];
        }
    }
    return max;
}