/*
構造体Person型を宣言し、人間の年齢(int型 age)
体重(double型 weight)・身長(double型 height)を管理するコードを作成してください。
実際に2人の人物の年齢、体重、身長を入力し、次のように出力するコードを記述してください。

年齢を入力してください。
28
体重を入力してください。
52.2
身長を入力してください。
165.3
年齢を入力してください。
32
体重を入力してください。
62.5
身長を入力してください。
168.8
年齢28体重52.2身長165.3です。
年齢32体重62.5身長168.8です。
*/

#include <iostream>

struct Person {
    int age;
    double weight;
    double height;
};

int main() {
    Person person1;
    std::cout << "年齢を入力してください。" << std::endl;
    std::cin >> person1.age;
    std::cout << "体重を入力してください。" << std::endl;
    std::cin >> person1.weight;
    std::cout << "身長を入力してください。" << std::endl;
    std::cin >> person1.height;

    Person person2;
    std::cout << "年齢を入力してください。" << std::endl;
    std::cin >> person2.age;
    std::cout << "体重を入力してください。" << std::endl;
    std::cin >> person2.weight;
    std::cout << "身長を入力してください。" << std::endl;
    std::cin >> person2.height;

    std::cout << "年齢" << person1.age << "体重" << person1.weight << "身長"
              << person1.height << "です。" << std::endl;
    std::cout << "年齢" << person2.age << "体重" << person2.weight << "身長"
              << person2.height << "です。" << std::endl;

    return 0;
}