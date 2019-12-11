// 学籍番号：4619072　氏名：服部　翼

int olympic_check(int year)
{
    int result;

    switch (year) {
        case 1916:
        case 1940:
        case 1944:
            result = -1;
            break;
        case 1906:
            result = 2;
            break;
        default:
            if (year > 2020 || year < 1896) {
                result = -2;
            } else if (year % 4 == 0) {
                result = 1;
            } else {
                result = 0;
            }
            break;
    }
    return result;
}