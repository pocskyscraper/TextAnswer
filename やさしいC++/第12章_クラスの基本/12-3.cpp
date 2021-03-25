/**
 * 2のクラスを利用し、次のように出力するコードを記述してください。
 *
 * X座標を入力してください。
 * 3
 * Y座標を入力してください。
 * 5
 * 座標は(3,5)です。
 */

#include <iostream>

class Point {
   private:
    int x = 0;
    int y = 0;

   public:
    void setX(int a) { x = (a >= 0 && a <= 10) ? a : 0; }
    void setY(int b) { y = (b >= 0 && b <= 10) ? b : 0; }
    int getX() const { return x; }
    int getY() const { return y; }
};

int main() {
    Point p;

    int x;
    std::cout << "X座標を入力してください。" << std::endl;
    std::cin >> x;
    p.setX(x);

    int y;
    std::cout << "Y座標を入力してください。" << std::endl;
    std::cin >> y;
    p.setY(y);

    std::cout << "座標は(" << p.getX() << "," << p.getY() << ")です。"
              << std::endl;

    return 0;
}
