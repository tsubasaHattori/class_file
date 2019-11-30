#include <stdio.h>

int main(void)
{
    char cmp[5][6] = {"-a0", "-a1", "-a2", "-a3", "-alpha"};

    printf("%s\n", cmp[0][2]);

    return 0;
}