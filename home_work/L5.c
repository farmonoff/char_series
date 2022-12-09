#include <stdio.h>
#include<string.h>
char count_capitals(char abc)
{
        if (65 <= abc && abc <= 90)
        {
           return 1;
        }
        return 0;
}

int main()
{

    int count = 0;
    char text[100];
    printf("So'z kiriting:");
    scanf("%[^\n]s", text);

    for(int i = 0; i < strlen(text); i++){
        count += count_capitals(text[i]);
    }
    printf("%d ta katta harf mavjud", count);

    return 0;
}