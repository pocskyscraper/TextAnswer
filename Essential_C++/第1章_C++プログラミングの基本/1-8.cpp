/**
 * 1.4節のswitch文では、間違った回数に応じて異なった「残念！」メッセージを表示している。
 * これを、間違った回数によってインデックスされる4つのメッセージ文字列を保持した配列を用いる形で書き直せ。
 */

#include <iostream>
#include <string>

int main() {
    std::string messages[4] = {
        "おっと、なかなかよい線だけれど、間違っているよ。\n",
        "ふむ、残念だが、二度目も間違ってしまったね。\n",
        "おやおや、これは思ってたより難しいと思うかい？\n",
        "だんだん、いらいらしてきたでしょう！"};

    std::cout << "間違った回数を入力してください。" << std::endl;

    int error_count;
    std::cin >> error_count;

    std::cout << messages[error_count - 1];

    return 0;
}