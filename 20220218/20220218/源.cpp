#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
    int sum = 0;
    int i = 0;
    int score = 0;
    int max = 0;
    int min = 100;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &score);
        sum += score;
        if (score > max)
            max = score;
        if (score < min)
            min = score;
    }
    printf("%.2lf\n", (sum - min - max) / 5.0);

    return 0;
}