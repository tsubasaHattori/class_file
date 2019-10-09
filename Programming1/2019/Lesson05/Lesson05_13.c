// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    double cm_height, m_height, weight, bmi;

    printf("身長[m]と体重[kg]を入力してください。\n");
    scanf("%lf", &m_height);
    scanf("%lf", &weight);

    if (!m_height || !weight) {
        printf("身長と体重を正しく入力してください。\n");
        return 0;
    }

    cm_height = m_height * 100; 
    bmi = weight / (m_height * m_height);

    printf("身長は%f[cm], 体重は%f[kg], BMIは%f です。\n", cm_height, weight, bmi);
    if (bmi < 18.5) {
        printf("あなたは、痩せ型 です。\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("あなたは、普通体重 です。\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("あなたは、肥満（1度） です。\n");
    } else if (bmi >= 30 && bmi < 35) {
        printf("あなたは、肥満（2度） です。\n");
    } else if (bmi >= 35 && bmi < 40) {
        printf("あなたは、肥満（3度） です。\n");
    } else if (bmi >= 40) {
        printf("あなたは、肥満（4度） です。\n");
    }
    
    return 0;
}