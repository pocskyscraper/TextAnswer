/**
 * インデックスが家族の姓、キーが家族の名前のvectorとなっているようなmapを定義せよ。
 * mapに最低6個のエントリを入れよ。
 * 姓をユーザから問い合わさせた後、全てのmapエントリを印刷せよ。
 */

#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    std::map<std::string, std::vector<std::string>> family;

    family["Yamada"] = std::vector<std::string>{"Hiroki", "Hanako"};
    family["Tanaka"] = std::vector<std::string>{"Tasuku", "Emi"};
    family["Satou"] = std::vector<std::string>{"Takuya", "Asami"};
    family["Hasegawa"] = std::vector<std::string>{"Hiroshige", "Asuka"};
    family["Iwata"] = std::vector<std::string>{"Wataru", "Hana"};
    family["Aoyama"] = std::vector<std::string>{"Shingo", "Miyo"};

    std::cout << "問い合わせる姓を入力してください。" << std::endl;
    std::string first_name;
    std::cin >> first_name;

    if (family.find(first_name) == family.end()) {
        std::cout << "その姓を持つ家族は存在しません。" << std::endl;
    } else {
        for (auto& last_name : family[first_name]) {
            std::cout << last_name << std::endl;
        }
    }
}