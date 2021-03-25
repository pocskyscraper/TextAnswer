/*
1の構造体へのポインタを引数として受けとり、年齢を1つ増やす関数
void aging(Person* p)を作成してください。
実際に1人の人物の情報を入力し、1年後の情報を出力するコードを記述してください。

年齢を入力してください。
28
体重を入力してください。
52.2
身長を入力してください。
165.3
年齢28体重52.200000身長165.300000です。
1年経過しました。
年齢29体重52.200000身長165.300000です。
*/

#include <stdio.h>

typedef struct Person {
    int age;
    double weight;
    double height;
} Person;

void aging(Person* p) { ++p->age; }

int main() {
    Person person;
    printf("年齢を入力してください。\n");
    scanf("%d", &person.age);
    printf("体重を入力してください。\n");
    scanf("%lf", &person.weight);
    printf("身長を入力してください。\n");
    scanf("%lf", &person.height);

    printf("年齢%d体重%f身長%fです。\n", person.age, person.weight,
           person.height);
    aging(&person);
    printf("1年経過しました。\n");
    printf("年齢%d体重%f身長%fです。", person.age, person.weight,
           person.height);

    return 0;
}