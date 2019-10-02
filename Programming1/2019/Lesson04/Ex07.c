#include <stdio.h>

int main(void)
{
    double cm_height, m_height, weight, bmi;

    printf("身長[cm]と体重[kg]を入力してください。\n");
    scanf("%lf", &cm_height);
    scanf("%lf", &weight);

    m_height = cm_height / 100; 
    bmi = weight / (m_height * m_height);

    printf("身長は%f, 体重は%f, BMIは%f です。\n", cm_height, weight, bmi);

    return 0;
}