/**
 * 好みのエディタを用いて、2行以上のテキストをファイルに入力する。
 * そのファイルを開き、それぞれの語をvector<string>オブジェクトに入れるプログラムを書け。
 * vectorの要素を順にcoutへと表示せよ。終わったら、sort()ジェネリックアルゴリズムを用いて並び替えよ。
 * 最後に、並び替えられた語を、あるファイルに出力せよ。
 */

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::ifstream fin("./essential_C++_1_7.txt");
    if (!fin) {
        std::cout << "ファイルを開けませんでした。" << std::endl;
        return 1;
    }

    //語の抽出
    std::vector<std::string> words;
    words.reserve(100);
    std::string word;
    while (!fin.eof()) {
        fin >> word;
        words.emplace_back(word);
    }
    fin.close();

    // coutへの出力
    for (const auto& word : words) {
        std::cout << word << std::endl;
    }

    //並び替えてファイル出力
    std::sort(words.begin(), words.end());
    std::ofstream fout("essential_C++_1_7_out.txt");
    for (const auto& word : words) {
        fout << word;
    }
    fout.close();

    return 0;
}