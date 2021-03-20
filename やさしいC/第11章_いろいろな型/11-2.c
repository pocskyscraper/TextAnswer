/*
1の構造体の配列を作成して、1と同じ結果になるコードを作成してください。
*/

#include <stdio.h>

typedef struct Person {
    int age;
    double weight;
    double height;
} Person;

int main() {
    Person persons[2];

    for (int i = 0; i < 2; ++i) {
        printf("年齢を入力してください。\n");
        scanf("%d", &persons[i].age);
        printf("体重を入力してください。\n");
        scanf("%lf", &persons[i].weight);
        printf("身長を入力してください。\n");
        scanf("%lf", &persons[i].height);
    }

    for (int i = 0; i < 2; ++i) {
        printf("年齢%d体重%f身長%fです。\n", persons[i].age, persons[i].weight,
               persons[i].height);
    }

    return 0;
}