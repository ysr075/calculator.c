# include <stdio.h>
# include <stdlib.h>

int main(void) {
    printf("\nWelcome to my calculator project on C\n\nprogrammed by @ysr075 on GitHub");
    while(1) {
        int choose;
        printf("\n\n1.add / 2.substract / 3.multiply / 4.divide: ");
        scanf("%d", &choose);
        if (choose == 1) {
            float num1;
            printf("\nnum1: ");
            scanf("%f", &num1);
            float num2;
            printf("num2: ");
            scanf("%f", &num2);
            float total = (num1 + num2);
            printf("\n");
            printf("%f", total);
        } else if (choose == 2) {
            float num1;
            printf("\nnum1: ");
            scanf("%f", &num1);
            float num2;
            printf("num2: ");
            scanf("%f", &num2);
            float total = (num1 - num2);
            printf("\n");
            printf("%f", total);
        } else if (choose == 3) {
            float num1;
            printf("\nnum1: ");
            scanf("%f", &num1);
            float num2;
            printf("num2: ");
            scanf("%f", &num2);
            float total = (num1 * num2);
            printf("\n");
            printf("%f", total);
        } else if (choose == 4) {
            float num1;
            printf("\nnum1: ");
            scanf("%f", &num1);
            float num2;
            printf("num2: ");
            scanf("%f", &num2);
            float total = (num1 / num2);
            printf("\n");
            printf("%f", total);
        } else {
            exit(0);
        }
    }
return 0;
}
