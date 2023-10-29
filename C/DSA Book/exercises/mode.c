#include <stdio.h>

int mode(int array[], int len);

int main(void)
{
    int numbers[] = {1, 2, 3};
    printf("mode: %i", mode(numbers, 3));
}
/*
 *return: -1 when there is no mode, and mode when there is one
 */
int mode(int array[], int len)
{
    int i, mode;
    int temp = 0;
    int count_mult_modes = 0;
    for (i = 0; i < len; i++)
    {
        if (i > 0 && array[i] == mode)
            continue;
        int count = 0;
        for (int j = i + 1; j < len; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        printf(" count: %i", count);
        if (count > temp)
        {
            mode = array[i];
            temp = count;
        }
        if (count == mode)
        {
            count_mult_modes++;
        }
        printf(" temp: %i ", temp);
    }
    if (count_mult_modes > 1 || temp == 0)
    {
        return(-1);
    }
    return mode;
}
