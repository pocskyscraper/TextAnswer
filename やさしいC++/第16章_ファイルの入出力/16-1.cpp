/*
次のように画面に出力するコードを記述してください。

--1--2--3--4--5
--6--7--8--9-10
-11-12-13-14-15
-16-17-18-19-20
-21-22-23-24-25
-26-27-28-29-30
*/

#include <iomanip>
#include <iostream>

int main() {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << std::setw(3) << std::setfill('-') << 5 * i + j + 1;
        }
        std::cout << std::endl;
    }

    return 0;
}