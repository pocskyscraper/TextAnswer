/*
1の構造体へのポインタを引数として受けとり、年齢を1つ増やす関数
void aging(Person* p)を作成してください。
実際に1人の人物の情報を入力し、1年後の情報を出力するコードを記述してください。

年齢を入力してください。
28
体重を入力してください。
52.2
身長を入力してください。
165.3
年齢28体重52.2身長165.3です。
1年経過しました。
年齢29体重52.2身長165.3です。
*/

#include <iostream>

struct Person {
    int age;
    double weight;
    double height;
};

inline void aging(Person* p) { ++p->age; }

int main() {
    Person person;
    std::cout << "年齢を入力してください。" << std::endl;
    std::cin >> person.age;
    std::cout << "体重を入力してください。" << std::endl;
    std::cin >> person.weight;
    std::cout << "身長を入力してください。" << std::endl;
    std::cin >> person.height;

    std::cout << "年齢" << person.age << "体重" << person.weight << "身長"
              << person.height << "です。" << std::endl;
    aging(&person);
    std::cout << "1年経過しました。" << std::endl;
    std::cout << "年齢" << person.age << "体重" << person.weight << "身長"
              << person.height << "です。" << std::endl;

    return 0;
}