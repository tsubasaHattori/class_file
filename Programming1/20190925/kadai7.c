#include <stdio.h>

int main(void)
{
    int i1, i2;
    double d1, d2;
    char ch1, ch2; 

    // scanf では複数の数値を同時に受け取ることができる
    printf("整数をスペースで区切って2つ１度に入力してください。\n");
    scanf("%d %d",&i1, &i2);
    printf("入力された整数は %d と %d です。\n", i1, i2);

    printf("小数をスペースで区切って2つ１度に入力してください。\n");
    scanf("%lf %lf",&d1, &d2);
    printf("入力された小数は %f と %f です。\n", d1, d2);

    // scanf では文字も受け取ることができる
    printf("英数字を１文字入力してください。(getchar)\n");
    ch1 = getchar(); // 改行文字を除去
    ch1 = getchar(); //英数字を取得
    printf("入力された文字は %c です。\n", ch1);

    printf("英数字をスペース区切りで2つ１度に入力してください。(scanf)\n");
    scanf(" %c %c", &ch1, &ch2);
    printf("入力された文字は %c と %c です。\n", ch1, ch2);

    printf("英数字をスペース区切りで2つ１度に入力してください。(getchar)\n");
    ch1 = getchar(); //改行文字を除去
    ch1 = getchar(); //1つめの英数字を取得
    ch2 = getchar(); //区切り文字のスペースを除去
    ch2 = getchar(); //2つめの英数字を取得
    printf("入力された文字は %c と %c です。\n", ch1, ch2);
    // 区切り文字のスペースが2つ以上あると、上のコードはうまく動かないけど、今回はこれで良しとしよう。

    return 0;
}

// tar zcvf ~/jwww/Programming1/[date].tar.gz ./2019 ./[date]