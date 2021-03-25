/**
 * 次のように整数値を表すPointクラスを設計してください。
 *
 * データメンバ
 * 　x : X座標(ただし0～10とする)
 * 　y : Y座標(ただし0～10とする)
 *
 * メンバ関数
 * 　void setX(int a) : X座標を設定する。(範囲外の値の場合は0とする)
 * 　void setY(int b) : Y座標を設定する。(範囲外の値の場合は0とする)
 * 　int getX() : X座標値を得る。
 * 　int getY() : Y座標値を得る。
 */

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