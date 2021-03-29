/**
 * ペンタゴナルの式は Pn = n*(3n-1)/2 である。
 * これを用いると、1,5,12,22,35,...という数列が生成される。
 * 渡されたvectorを、ユーザによって指定された位置までの数列の要素で埋める関数を定義せよ。
 * 指定された位置が正しいことを確認すること。
 * 渡されたvectorの要素を表示する、2番目の関数を定義せよ。
 * このとき、2番目のパラメータで、数列の名前を文字列で指定できるようにせよ。
 * これらの関数を試すためのmain()関数を定義せよ。
 */

#include <iostream>
#include <string>
#include <vector>

bool fill(const int, std::vector<int>&);
void show(const std::vector<int>&, const std::string&);

int main() {
    int position;
    std::cout << "位置を入力してください。" << std::endl;
    std::cin >> position;

    std::vector<int> data;
    if (!fill(position, data)) {
        return 1;
    }

    show(data, "ペンタゴナル数列");
}

bool fill(const int position, std::vector<int>& data) {
    if (position <= 0) {
        std::cout << "位置が正しくありません。" << std::endl;
        return false;
    }

    for (int i = 1; i <= position; ++i) {
        data.emplace_back(i * (3 * i - 1) / 2);
    }
    return true;
}

void show(const std::vector<int>& data, const std::string& name) {
    std::cout << name << std::endl;
    for (const auto& n : data) {
        std::cout << n << std::endl;
    }
}