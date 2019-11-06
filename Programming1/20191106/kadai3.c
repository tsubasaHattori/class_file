// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

void fibnum(int n, long int *x) {
    
    int fn=0;
    int i;
    int fpp=0, fp=1;

    for (i=2; i<=n; i++) {
        fn = fpp + fp;
        fpp = fp;
        fp = fn;
    }
    *x = fn;
}

int main(void)
{
    int n;
    long int x;

    printf("何番目のフィボナッチ数を出力しますか？ :");
    scanf("%d", &n);

    fibnum(n, &x);

    printf("%d番目のフィボナッチ数は%ldです。\n", n, x);

    return 0;
}
