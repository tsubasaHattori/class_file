// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int n = 10;
    int sum = 0;

    for (i=1; i<argc; i++) {
        if (strcmp(argv[i], "-n") == 0 && i+1 < argc) {
            n = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--help") == 0) {
            fprintf(stderr, "\n");
            fprintf(stderr, "使い方！\n");
            fprintf(stderr, "\n");
            fprintf(stderr, "書式！\n");
            fprintf(stderr, "　　Lesson12_04 [-n [整数(=10)]] [--help]\n");
            fprintf(stderr, "\n");
            fprintf(stderr, "オプション！\n");
            fprintf(stderr, "　　-n [整数(=10)]   1から入力した整数までの和を出力　*()内はデフォルト値\n");
            fprintf(stderr, "　　--help           使い方を表示\n");
            exit(0);
        } else {
            fprintf(stderr, "Unknown Options\n");
            exit(1);
        }
    }

    for (i=1; i<=n; i++) {
        sum += i;
    }

    printf("1から%dまでの和は%dです。\n", n, sum);

    return 0;
}
