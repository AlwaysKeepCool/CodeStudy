#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//打印金字塔
int main()
{
    char ch = 0;
    ch = getchar();
    int i = 0;
    //此时打印5行
    for (i = 0; i < 5; i++)
    {
        //打印空格
        int j = 0;
        for (j = 0; j < 5 - i; j++)
        {
            printf(" ");
        }
        //打印字符
        for (j = 0; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");

    }
    return 0;
}






//大写转变成小写

#include<stdio.h>
int main()
{
    char ch = 0;
    while ((ch = getchar()) != EOF)
    {
        printf("%c\n", ch + 32);

    }
    return 0;
}










//bmi求值
#include<stdio.h>
int main()
{
    int weight = 0;
    int high = 0;
    double BMI = 0.0;
    scanf("%d%d", &weight, &high);
    BMI = weight /( (double)(high * high) / 10000);
    printf("%.2lf", BMI);
    return 0;
}














//三角形的周长和面积
#include<stdio.h>
#include<math.h>

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d%d%d", &a, &b, &c);
    double circumference = 0.0;
    double area = 0.0;
    circumference = a + b + c;
    double p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("circumference=%.2lf area=%.2lf", circumference, area);

        return 0;
}





//球的体积
#include<stdio.h>
int main()
{
    double r = 0.0;
    double pi = 3.1415926;
    scanf("%lf", &r);
    double v = 0.0;
    v = 4.0 / 3 * (pi * r * r * r);
    printf("%.3lf\n", v);

    return 0;
}















#include<stdio.h>
int main()
{
    int i = 0;
    for (i = 10000; i < 100000; i++)
    {
        int j = 0;
        int sum = 0;
        //int tmp = 0;
        for (j = 10; j < 10000; j *= 10)
        {
            sum += (i % j) * (i / j);
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}













#include<stdio.h>

int main()
{
    int i = 0;
    int arr[10];
    for (i = 0 ; i < 10; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int left = 0, right = 9;
    int tmp = 0;
    while (right > left)
    {
        tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}