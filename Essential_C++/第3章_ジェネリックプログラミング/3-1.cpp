/**
 * テキストファイルを読み込むプログラムを書け。それぞれの語をmapに格納せよ。
 * mapのキーに紐づいた値は、テキストファイル中で何度当該の語が現れたのかを示すようにする。
 * 除外する語のsetを用意し、a, an, or, the, and, butなどを入れる。
 * mapに語を入れる前に、語が除外setに載っていないことを確認する。
 * テキストの読込みが終わったら、語の一覧と、出現頻度のリストを表示せよ。
 * 応用例として、テキストを表示する前に、ユーザから語があるかどうかを確認できるようにせよ。
 */

#include <algorithm>
#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <string>
#include <utility>

std::unique_ptr<std::map<std::string, int>> createMapFromFile(std::ifstream*);
void quizForUser(std::unique_ptr<std::map<std::string, int>>&);

int main() {
    std::ifstream fin("./essential_C++_1_7.txt");
    if (!fin) {
        std::cout << "ファイルを読み込めませんでした。" << std::endl;
        return 1;
    }

    auto words = createMapFromFile(&fin);

    quizForUser(words);

    for (const auto& entry : *words) {
        std::cout << entry.first << ":" << entry.second << std::endl;
    }

    fin.close();
}

std::unique_ptr<std::map<std::string, int>> createMapFromFile(
    std::ifstream* fin) {
    auto words = std::make_unique<std::map<std::string, int>>();
    std::set<std::string> excludeWords{"a", "an", "or", "the", "and", "but"};

    while (!fin->eof()) {
        std::string word;
        *fin >> word;

        if (excludeWords.find(word) != excludeWords.end()) {
            continue;
        }

        if (words->find(word) != words->end()) {
            ++(*words)[word];
        } else {
            (*words)[word] = 1;
        }
    }

    return words;
}

void quizForUser(std::unique_ptr<std::map<std::string, int>>& words) {
    while (true) {
        std::cout << "語当てゲームをしますか？\nやらない場合はn、やる場合はそれ"
                     "以外のキーで入力してください。"
                  << std::endl;
        std::string command;
        std::cin >> command;
        if (command == "n") {
            return;
        }

        std::cout << "mapにある語は何でしょう？" << std::endl;
        std::cin >> command;
        if (words->find(command) != words->end()) {
            std::cout << "それはmapに入っています！" << std::endl;
        } else {
            std::cout << "それはmapに入っていません……" << std::endl;
        }
    }
}