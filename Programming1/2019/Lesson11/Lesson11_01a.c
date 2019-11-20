// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <string.h>

typedef struct Car {
    int capacity;
    int fueltank;
    double horsepower;
    float max_speed;
    char name[128];
} Car;

void read_data(Car *car) {
    printf("乗車定員を入力してください。\n");
    scanf("%d", &car->capacity);

    printf("ガソリンタンク容量(l)を入力してください。\n");
    scanf("%d", &car->fueltank);

    printf("馬力(PS)を入力してください。\n");
    scanf("%lf", &car->horsepower);

    printf("最高速度(km/h)を入力してください。\n");
    scanf("%f", &car->max_speed);

    printf("車名を入力してください。\n");
    scanf("%s", car->name);
    printf("\n");
}

void print_car(Car car) {
    printf("この車の乗車定員は %d 名です。\n", car.capacity);
    printf("この車のガソリンタンク容量は %d lです。\n", car.fueltank);
    printf("この車の馬力は %f PSです。\n", car.horsepower);
    printf("この車の最高速度は %f km/hです。\n", car.max_speed);
    printf("この車の車名は %s です。\n", car.name);
    printf("\n");
}

int main(void)
{
    Car car1;

    read_data(&car1);
    print_car(car1);

    return 0;
}
