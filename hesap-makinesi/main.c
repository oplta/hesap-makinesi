//written by oplta️
//clean için https://codebeautify.org/c-formatter-beautifier#
#include <stdio.h>
#include <stdlib.h>

int main() {
        int num1, num2, secim;
        float result;
        printf("Hesap Makinesi \n");
        printf("1. Toplama \n");
        printf("2. Çıkarma \n");
        printf("3. Çarpma \n");
        printf("4. Bölme \n");
        printf("Lütfen yapmak istediğiniz işlemi seçin  ");
        scanf("%d", & secim);

        printf("Birinci Sayıyı Girin  \n");
        scanf("%d", & num1);
        printf("İkinci Sayıyı Girin  \n");
        scanf("%d", & num2);

        switch (secim) {

        case 1:
                result = num1 + num2;
                printf("Sonuç %.2f\n", result);
                break;
        case 2:
                result = num1 - num2;
                printf("Sonuç %.2f\n", result);
                break;
        case 3:
                result = num1 * num2;
                printf("Sonuç %.2f\n", result);
                break;
        case 4:
                if (num2 != 0) {
                        result = (float) num1 / num2;
                        printf("Sonuç %.2f\n", result);
                }
                break;
        default:
                printf("Geçersin Seçim. 1 ve 4 arasında bir değer seçin. \n");

        }

        return 0;
}
