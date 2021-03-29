/**
 * 例題2.2で実装したペンタゴナル数列を計算する関数を、次の2つの関数に分けよ。
 * 1つ目の関数は、inlineを用い、位置の正当性を確認するもの。
 * もう1つは、正しい位置が指定された時に、まだ計算していない部分の実際の計算を行う、2番目の関数。
 */

#include <iostream>
#include <string>
#include <vector>

inline bool check_position(const int position) {
    if (position <= 0) {
        std::cout << "位置が正しくありません。" << std::endl;
        return false;
    }
    return true;
}

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
    if (!check_position(position)) {
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