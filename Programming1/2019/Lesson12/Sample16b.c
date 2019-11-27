// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("実行ファイル名は %s です。\n", argv[0]);

    printf("実行時の引数リストは");
    if (argc == 1) {
        printf("ありません。\n");
    } else {
        printf("\n");
        for (i=1; i<argc; i++) {
            printf("argv[%d]: %s\n", i, argv[i]);
        }
        printf("です。\n");
    }

    return 0;
}
