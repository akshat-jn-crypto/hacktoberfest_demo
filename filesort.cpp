#include <stdio.h>
int main()
{
    FILE
        *fp;
    char ch;
    fp = fopen("Lecture 22.txt", "r");
    while (1)
    {   int count=0;
        ch = fgetc(fp);
        
        if (ch == ' ')
        {
            count ++;
            break;
        }

        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}