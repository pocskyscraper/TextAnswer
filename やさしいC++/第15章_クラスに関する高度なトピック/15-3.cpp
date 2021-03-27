/**
 * 15.1節のPointクラスのコードに次の演算子をオーバーロードするコードを記述してください。
 * -演算子
 * --演算子
 */

#include <iostream>
using namespace std;

// Pointクラスの宣言
class Point {
   private:
    int x;
    int y;

   public:
    Point(int a = 0, int b = 0) {
        x = a;
        y = b;
    }
    void setX(int a) { x = a; }
    void setY(int b) { y = b; }
    void show() { cout << " x:" << x << " y:" << y << '\n'; }
    Point operator++();
    Point operator++(int d);
    Point operator--();
    Point operator--(int d);
    friend Point operator+(Point p1, Point p2);
    friend Point operator+(Point p, int a);
    friend Point operator+(int a, Point p);
    friend Point operator-(Point p1, Point p2);
    friend Point operator-(Point p, int a);
    friend Point operator-(int a, Point p);
};

// Pointクラスメンバ関数の定義
Point Point::operator++() {
    x++;
    y++;
    return *this;
}

Point Point::operator++(int d) {
    Point p = *this;
    x++;
    y++;
    return p;
}

Point Point::operator--() {
    x--;
    y--;
    return *this;
}

Point Point::operator--(int d) {
    Point p = *this;
    x--;
    y--;
    return p;
}

//フレンド関数の定義
Point operator+(Point p1, Point p2) {
    Point tmp;
    tmp.x = p1.x + p2.x;
    tmp.y = p1.y + p2.y;
    return tmp;
}

Point operator+(Point p, int a) {
    Point tmp;
    tmp.x = p.x + a;
    tmp.y = p.y + a;
    return tmp;
}

Point operator+(int a, Point p) {
    Point tmp;
    tmp.x = a + p.x;
    tmp.y = a + p.y;
    return tmp;
}

Point operator-(Point p1, Point p2) {
    Point tmp;
    tmp.x = p1.x - p2.x;
    tmp.y = p1.y - p2.y;
    return tmp;
}

Point operator-(Point p, int a) {
    Point tmp;
    tmp.x = p.x - a;
    tmp.y = p.y - a;
    return tmp;
}

Point operator-(int a, Point p) {
    Point tmp;
    tmp.x = a - p.x;
    tmp.y = a - p.y;
    return tmp;
}