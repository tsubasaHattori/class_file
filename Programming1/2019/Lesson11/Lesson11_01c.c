// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <string.h>

#define CARS 4

typedef struct Car {
    int capacity;
    int fueltank;
    double horsepower;
    float max_speed;
    char name[128];
} Car;

void read_data(Car *cars) {
    int i;

    for (i=0; i<CARS; i++) {
        printf("car%dの乗車定員を入力してください。\n",i+1);
        scanf("%d", &(cars+i)->capacity);

        printf("car%dのガソリンタンク容量(l)を入力してください。\n",i+1);
        scanf("%d", &(cars+i)->fueltank);

        printf("car%dの馬力(PS)を入力してください。\n",i+1);
        scanf("%lf", &(cars+i)->horsepower);

        printf("car%dの最高速度(km/h)を入力してください。\n",i+1);
        scanf("%f", &(cars+i)->max_speed);

        printf("car%dの車名を入力してください。\n",i+1);
        scanf("%s", (cars+i)->name);
    }
}

void print_cars(Car cars[]) {
    int i;

    for (i=0; i<CARS; i++) {
        printf("car%dの乗車定員は %d 名です。\n",i+1, cars[i].capacity);
        printf("car%dのガソリンタンク容量は %d lです。\n",i+1, cars[i].fueltank);
        printf("car%dの馬力は %f PSです。\n",i+1, cars[i].horsepower);
        printf("car%dの最高速度は %f km/hです。\n",i+1, cars[i].max_speed);
        printf("car%dの車名は %s です。\n",i+1, cars[i].name);
        printf("\n");
    }
}

int main(void)
{
    Car cars[CARS];
    
    read_data(cars);
    print_cars(cars);

    return 0;
}
