/*
次のように画面に出力するコードを記述してください。

身長と体重を入力してください。
165.2
52.5
身長は165.2センチです。
体重は52.5キロです。
*/

#include <iostream>

int main() {
    std::cout << "身長と体重を入力してください。" << std::endl;

    double height, weight;
    std::cin >> height >> weight;

    std::cout << "身長は" << height << "センチです。" << std::endl;
    std::cout << "体重は" << weight << "キロです。" << std::endl;

    return 0;
}