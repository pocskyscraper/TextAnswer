/*
2と同じ処理を行う関数を、参照を使って定義してください。
*/

#include <iostream>

inline void add(int& x1, int& x2, const int a) {
    x1 += a;
    x2 += a;
}

int main() {
    std::cout << "2科目分の点数を入力してください。" << std::endl;
    int score1;
    int score2;
    std::cin >> score1 >> score2;

    std::cout << "加算する点数を入力してください。" << std::endl;
    int adder;
    std::cin >> adder;

    add(score1, score2, adder);
    std::cout << adder << "点加算しましたので" << std::endl;
    std::cout << "科目1は" << score1 << "点となりました。" << std::endl;
    std::cout << "科目2は" << score2 << "点となりました。" << std::endl;

    return 0;
}