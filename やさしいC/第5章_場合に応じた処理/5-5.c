/*
キーボードから1から5までの5段階の成績を入力させ、
成績に応じて次のようなメッセージを出力するコードを書いてください。

1 : 成績は1です。もっとがんばりましょう。
2 : 成績は2です。もう少しがんばりましょう。
3 : 成績は3です。さらに上を目指しましょう。
4 : 成績は4です。たいへんよくできました。
5 : 成績は5です。たいへん優秀です。

成績を入力してください。
3(ユーザ入力)
成績は3です。
さらに上を目指しましょう。
 */

#include <stdio.h>

int main() {
    printf("成績を入力してください。\n");

    int score = 0;
    scanf("%d", &score);

    printf("成績は%dです。\n", score);

    char* messages[5] = {"もっとがんばりましょう。",
                         "もう少しがんばりましょう。",
                         "さらに上を目指しましょう。",
                         "たいへんよくできました。", "たいへん優秀です。"};

    printf("%s", messages[score - 1]);

    return 0;
}