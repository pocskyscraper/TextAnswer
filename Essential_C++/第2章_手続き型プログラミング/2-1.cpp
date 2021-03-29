/**
 * 先に示したmain()では、ユーザがただ1つの値を指定するだけで終了してしまう。
 * ユーザが2つ以上の位置を問いたい時は、彼女はプログラムを2回以上実行しなければならない。
 * main()を修正することで、ユーザに、彼女がやめたいと思うまで、
 * 続けて位置を入力できるように変更せよ。
 */

#include <iostream>
using namespace std;

// fibon_elem()の事前宣言
// 関数をコンパイラに教える
bool fibon_elem(int, int&);

int main() {
    bool isContinue;
    do {
        int pos;
        cout << "要素の位置を指定してください：";
        cin >> pos;

        int elem;
        if (fibon_elem(pos, elem))
            cout << "要素#" << pos << "は" << elem << endl;
        else
            cout << "申し訳ありませんが、位置#" << pos
                 << "の要素は計算できません。" << endl;

        cout << "まだ続けますか？ "
                "続けるならy、続けないならそれ以外を入力してください。"
             << endl;
        char input;
        cin >> input;
        isContinue = input == 'y';
    } while (isContinue);
}

bool fibon_elem(int pos, int& elem) {
    // 正しくない位置が指定されたかどうかチェック
    if (pos <= 0 || pos > 1024) {
        elem = 0;
        return false;
    }

    // elemは1番目と2番目の要素は1である。
    elem = 1;
    int n_2 = 1, n_1 = 1;

    for (int ix = 3; ix <= pos; ++ix) {
        elem = n_2 + n_1;
        n_2 = n_1;
        n_1 = elem;
    }

    return true;
}