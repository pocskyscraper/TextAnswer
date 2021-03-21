/*
次のように画面に出力するコードを記述してください。
*
**
***
****
*****
*/

#include <iostream>

int main() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}