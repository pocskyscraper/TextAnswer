/*
2科目のテストの点数(x1, x2)に、a点ずつを加算する関数add()を、
ポインタを使って定義してください。
キーボードからx1, x2, aを入力し、次のように出力するコードを記述してください。

2科目分の点数を入力してください。
78
65
加算する点数を入力してください。
12
12点加算しましたので
科目1は90点となりました。
科目2は77点となりました。
*/

#include <iostream>

inline void add(int* x1, int* x2, const int a) {
    *x1 += a;
    *x2 += a;
}

int main() {
    std::cout << "2科目分の点数を入力してください。" << std::endl;
    int score1;
    int score2;
    std::cin >> score1 >> score2;

    std::cout << "加算する点数を入力してください。" << std::endl;
    int adder;
    std::cin >> adder;

    add(&score1, &score2, adder);
    std::cout << adder << "点加算しましたので" << std::endl;
    std::cout << "科目1は" << score1 << "点となりました。" << std::endl;
    std::cout << "科目2は" << score2 << "点となりました。" << std::endl;

    return 0;
}