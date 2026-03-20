
#include <stdio.h>

int main()
{
    float num1,num2,num3,num4,num5,num6,num7,num8,num9,num0;
    float sum, product, mod;

    printf("Weka namba kumi:\n");

    scanf("%f %f %f %f %f %f %f %f %f %f",
          &num1,&num2,&num3,&num4,&num5,
          &num6,&num7,&num8,&num9,&num0);

    sum = num0 + num6;
    product = num4 * num8;
    mod = (sum * product) + (num1 + num7) - num9;

    if ((int)mod % 2 == 0)
    {
        printf("Mod ni namba shufwa (even): %f\n", mod);
    }
    else
    {
        printf("Mod ni namba witiri (odd): %f\n", mod);
    }

    printf("Jumla (sum) ni %f\n", sum);
    printf("Product ni %f\n", product);
    printf("Mod ni %f\n", mod);

    return 0;
}