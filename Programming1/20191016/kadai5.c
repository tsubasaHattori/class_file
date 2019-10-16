// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int res, fn=0;
    int i;
    int fpp=0, fp=1;

    printf("何番目のフィボナッチ数を出力しますか？\n2以上の整数を入力してください。\n");
    scanf("%d", &res);

    for (i=2; i<=res; i++) {
        fn = fpp + fp;
        fpp = fp;
        fp = fn;
    }

    printf("%d 番目のフィボナッチ数は %d です。\n", res, fn);
    printf("%d 番目のフィボナッチ数 F_%d: %d と、%d番目のフィボナッチ数 F_%d: %d の比は、 %f です。\n", res, res, fn, res-1, res-1, fpp, fn/(double)fpp);

    return 0;
}