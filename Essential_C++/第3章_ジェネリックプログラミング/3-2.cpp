/**
 * テキストファイルを読みこみ、語をvectorに格納せよ。
 * vectorを文字列の長さに従ってソートせよ。
 * std::sort()に渡す関数オブジェクトを定義する。
 * これは2つの文字列を受け取り、最初の文字列が2番目より短かった時にtrueを返すようにする。
 * 並び替えられたvectorを印刷せよ。
 */

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class compareString {
   public:
    bool operator()(std::string left, std::string right) {
        return left.length() < right.length();
    }
};

int main() {
    std::ifstream fin("essential_C++_1_7.txt");
    if (!fin) {
        std::cout << "ファイルを読み込めませんでした。" << std::endl;
        return 1;
    }

    std::vector<std::string> words;
    while (!fin.eof()) {
        std::string word;
        fin >> word;
        words.emplace_back(word);
    }

    std::sort(words.begin(), words.end(), compareString());

    for (auto& word : words) {
        std::cout << word << std::endl;
    }

    fin.close();
}