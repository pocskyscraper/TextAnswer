/**
 * 前に示したサンプルプログラムを動作させること。
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string user_name;
    cout << "名前を入れてください:";
    cin >> user_name;
    cout << '\n' << "ハロー、" << user_name << "...ごきげんよう！\n";

    return 0;
}