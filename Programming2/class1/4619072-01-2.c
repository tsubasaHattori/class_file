// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int key;
    int ans;
    int diff = 1;
    char *hint;
    

    srand((unsigned)time(NULL));
    key = rand() % 100;
    printf("%d\n", key);

    printf("0~99の中の整数を一つ生成しました。\nヒントを頼りに答えに近づきましょう。\n");

    while (diff != 0) {
        printf("答えは: ");
        scanf("%d", &ans);

        diff = abs(ans - key);

        if (diff == 0) {
            hint = "正解です";
        } else if (diff < 10) {
            hint = ans > key ? "大きいです" : "小さいです";
        } else {
            hint = ans > key ? "大きすぎます" : "小さすぎます";
        }
        printf("%s\n", hint);
    }

    return 0;
}