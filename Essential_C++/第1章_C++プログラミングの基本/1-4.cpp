/**
 * 1のプログラムを以下のように拡張してみよう。
 * (1)ユーザに名字と名前の両方を入れてもらうように。
 * (2)これら双方を出力するように。
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string user_first_name;
    cout << "名字を入れてください:";
    cin >> user_first_name;

    string user_last_name;
    cout << "名前を入れてください:";
    cin >> user_last_name;

    cout << '\n'
         << "ハロー、" << user_first_name << " " << user_last_name
         << "...ごきげんよう！\n";

    return 0;
}