#include <stdio.h>
#include <string.h>

void changePosition(char* ch1, char* ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
void cal(char* k, int x, int y)
{
    int i;
    if (x >= 0)
    {
        if (x == y)
            printf("%s  ", k);
        else
        {
            for (i = x; i <= y; i++)
            {
                changePosition((k + x), (k + i));
                cal(k, x + 1, y);
                changePosition((k + x), (k + i));
            }
        }
    }
}

int main()
{
    char i[10];
    printf("please enter your str(<10) : ");
    gets_s(i);
    printf("\nPointer : Generate permutations of a given string :\n");
    printf("--------------------------------------------------------\n");
    int n = strlen(i);
    cal(i, 0, n - 1);
    printf("\n\n");
    return 0;
}