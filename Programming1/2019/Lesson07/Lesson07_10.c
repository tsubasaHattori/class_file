// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int matrix1[3][3];
    int matrix2[3][3];
    int sum[3][3];
    int diff[3][3];
    int t_mat1[3][3];
    int t_mat2[3][3];
    int i, j;

    printf("1つ目の行列を入力してください。\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d%d成分：", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("2つ目の行列を入力してください。\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d%d成分：", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
            t_mat1[i][j] = matrix1[j][i];
            t_mat2[i][j] = matrix2[j][i];
        }
    }

    printf("和\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("差\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    printf("転置行列（１つ目）\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", t_mat1[i][j]);
        }
        printf("\n");
    }

    printf("転置行列（2つ目）\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", t_mat2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
