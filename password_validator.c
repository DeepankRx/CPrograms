#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[26], duplicate_str[26], val_string[26], val_string2[26];
    int len, count = 0;
    fgets(str, sizeof(str), stdin);
    strcpy(duplicate_str, str);
    len = strlen(str) - 1;

    if (len >= 4 && len <= 25)
    {
        if ((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))
        {
            for (int i = 0, j = 0; i < len || str[i] != '\0'; i++)
            {
                if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_')
                {
                    if (duplicate_str[i] == str[i])
                    {
                        count++;
                    }
                }
            }
        }
    }

    if (count == len)
        printf("true\n");
    else
        printf("false\n");
    return 0;
}
