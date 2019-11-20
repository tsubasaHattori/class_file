// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct HealthCare {
    double height;
    double weight;
    int age;
    char blood_type[2];
    double bmi;
} HealthCare;

void read_data(HealthCare *person) {
    printf("身長[cm]を入力してください。\n");
    scanf("%lf", &person->height);

    printf("体重[kg]を入力してください。\n");
    scanf("%lf", &person->weight);

    printf("年齢を入力してください。\n");
    scanf("%d", &person->age);

    printf("血液型(大文字）を入力してください。\n");
    scanf("%s", person->blood_type);
}

void print_info(HealthCare person) {
    person.bmi = person.weight/((person.height / 100) * (person.height / 100));
    printf("あなたの年齢は %d 歳\n", person.age);
    printf("あなたの血液型は %s型\n", person.blood_type);
    printf("あなたの体重は %.1f [kg]\n", person.weight);
    printf("あなたの身長は %.1f [cm]です。\n", person.height);
    printf("あなたのBMI指数は    %.1f\n", person.bmi);

    if (person.bmi < 18.5) {
        printf("肥満度評価は 「痩せ型」 です。\n");
    } else if (person.bmi >= 18.5 && person.bmi < 25) {
        printf("肥満度評価は 「普通体重」 です。\n");
    } else if (person.bmi >= 25 && person.bmi < 30) {
        printf("肥満度評価は 「肥満（1度）」 です。\n");
    } else if (person.bmi >= 30 && person.bmi < 35) {
        printf("肥満度評価は 「肥満（2度）」 です。\n");
    } else if (person.bmi >= 35 && person.bmi < 40) {
        printf("肥満度評価は 「肥満（3度）」 です。\n");
    } else if (person.bmi >= 40) {
        printf("肥満度評価は 「肥満（4度）」 です。\n");
    }
}

int main(void)
{
    HealthCare person;

    read_data(&person);
    print_info(person);

    return 0;
}
