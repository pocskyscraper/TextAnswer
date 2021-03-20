/*
構造体型struct Personを宣言し、2つの構造体変数に年齢(int型 age)
体重(double型 weight)・身長(double型 height)を入力させ、
次のように出力するコードを記述してください。

年齢を入力してください。
26
体重を入力してください。
52.2
身長を入力してください。
165.3
年齢を入力してください。
32
体重を入力してください。
62.5
身長を入力してください。
168.8
年齢28体重52.200000身長165.300000です。
年齢32体重62.500000身長168.800000です。
*/

#include <stdio.h>

typedef struct Person {
    int age;
    double weight;
    double height;
} Person;

int main() {
    Person person1;
    printf("年齢を入力してください。\n");
    scanf("%d", &person1.age);
    printf("体重を入力してください。\n");
    scanf("%lf", &person1.weight);
    printf("身長を入力してください。\n");
    scanf("%lf", &person1.height);

    Person person2;
    printf("年齢を入力してください。\n");
    scanf("%d", &person2.age);
    printf("体重を入力してください。\n");
    scanf("%lf", &person2.weight);
    printf("身長を入力してください。\n");
    scanf("%lf", &person2.height);

    printf("年齢%d体重%f身長%fです。\n", person1.age, person1.weight,
           person1.height);
    printf("年齢%d体重%f身長%fです。", person2.age, person2.weight,
           person2.height);

    return 0;
}