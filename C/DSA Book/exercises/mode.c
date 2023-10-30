#include <stdio.h>

int mode(int array[], int len);

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 4};
    printf("mode: %i", mode(numbers, 5));
}
/*
 *return: -1 when there is no mode, and mode when there is one
 */
int mode(int array[], int len)
{
    int i, mode;
    /*highest_freq keeps track of the the frequency of the current mode*/
    int highest_freq = 0;
    /*in a situation where a number with the same frequency as the current mode has been found, second_highest_freq stores that number*/
    int second_highest_freq = 0;
    for (i = 0; i < len; i++)
    {
        if (array[i] == mode)
            continue;
        int count = 0;
        for (int j = i + 1; j < len; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        if (count == highest_freq)
        {
            second_highest_freq = highest_freq;
        }
        else if (count > highest_freq)
        {
            mode = array[i];
            highest_freq = count;
        }
    }
    if (highest_freq == second_highest_freq)
    {
        return(-1);
    }
    return mode;
}
