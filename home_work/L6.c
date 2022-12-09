#include <stdio.h>
#include<string.h>

char count_capitals(char abc)
{
    if ( 34 <= abc && abc <= 47 && 58 <= abc && abc <= 64)
    {
        return 1;
    }
    return 0;
}

int main()
{

    int count = 0;
    char text[100];
    printf("text = ");
    scanf("%[^\n]s", text);

    for (int i = 0; i < strlen(text); i++)
    {
        count += count_capitals(text[i]);
    }
    printf("%d ta maxsus belgi mavjud", count);

    return 0;
}