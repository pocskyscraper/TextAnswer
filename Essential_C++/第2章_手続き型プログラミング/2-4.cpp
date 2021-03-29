/**
 * ペンタゴナルを保持するために、スタティックローカルのvectorを導入せよ。
 * この関数は、vectorへのconstポインタを返す。
 * 関数では、位置の指定を受け取り、vectorの大きさがこの大きさに達していなかったら、その位置まで大きくする。
 * 与えられた位置に従って、その位置の要素を返す2番目の関数を実装する。
 * 最後に、これらの関数を試すmain()関数を書け。
 */

#include <iostream>
#include <vector>

const std::vector<int>* createPentagonal(const int);

inline int getElement(const int position, const std::vector<int>* pentagonal) {
    if (position < 0) {
        std::cout << "位置の指定が誤っています。" << std::endl;
        return -1;
    }

    return pentagonal->at(position - 1);
}

int main() {
    std ::cout << "位置を指定してください。" << std::endl;
    int position;
    std::cin >> position;

    auto pentagonal = createPentagonal(position);
    if (pentagonal != nullptr) {
        std::cout << "位置" << position << "の要素は"
                  << getElement(position, pentagonal) << "です。" << std::endl;
    }
}

const std::vector<int>* createPentagonal(const int position) {
    if (position < 0) {
        std::cout << "位置の指定が誤っています。" << std::endl;
        return nullptr;
    }

    static std::vector<int> pentagonal = {};
    if (pentagonal.size() < position) {
        int nowTail = (pentagonal.size() == 0) ? 0 : pentagonal.size() - 1;
        for (int i = nowTail + 1; i <= position; ++i) {
            pentagonal.emplace_back(i * (3 * i - 1) / 2);
        }
    }

    const std::vector<int>* p = &pentagonal;
    return p;
}
