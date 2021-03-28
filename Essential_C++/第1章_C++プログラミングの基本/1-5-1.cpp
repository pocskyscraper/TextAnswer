/**
 * ユーザの名前を問うプログラムを書け。返答を読み込め。
 * 入力の長さが最低でも2文字あることを確認せよ。
 * 名前が正しければ、ユーザに返してみよう。
 *
 * 2つの実装を提供せよ：1つはCのスタイルの文字列を用いる形、
 * もう1つはstringクラスオブジェクトを用いる形で。
 */

#include <cstring>
#include <iostream>

int main() {
    std::cout << "名前を入力してください。" << std::endl;

    char name[128];
    std::cin >> name;
    if (strlen(name) < 3) {
        std::cout << "入力が短すぎます。" << std::endl;
        return 1;
    }

    std::cout << "あなたの名前は" << name << "ですね。" << std::endl;

    return 0;
}