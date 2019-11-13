// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

// 配列を引数をする
void setonetwothree(int a[]) {
    int i;

    for (i=0; i<3; i++) {
        a[i] = i+1;
    }
}

int main(void)
{
    int i;
    int a[5] = {0};

    setonetwothree(a);

    for (i=0; i<5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
