// 学籍番号：4619072　氏名：服部　翼

int power(int x, int y)
{
    int i; 
    int result = 1;
    for (i=0; i<y; i++) {
        result *= x;
    }
    return result;
}