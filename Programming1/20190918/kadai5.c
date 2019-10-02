#include <stdio.h>

int main(void)
{
    printf("警告音 (\\a):\n\a\n\n");
    printf("バックスペース (\\b):\n abc\bdef\n");
    printf("水平タブ (\\t):\n aaaa \t bbbb\n");
    printf("垂直タブ (\\v):\n aaaa\n \vbbbb\n");
    printf("復帰（キャリッジリターン　\\r):\n aaaa \r bbbb \n");

    return 0;
}