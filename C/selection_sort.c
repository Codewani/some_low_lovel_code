#include <stdio.h>

int main(void)
{
    int length = 9;
    int numbers[] = {8, 4, 3, 2, 1, 1, 13, 34, 1};

    for(int i = 0; i < length; i++)
    {
        /*temporary variable set to the initial value of the array at i*/
        int temp = numbers[i];
        /* count is used to keep track of the value of the array at j which is currently the lowest*/
        int count = 0;

        for(int j = i + 1; j < length; j++)
        {
            /*check if value of temp is greater than the value of the array at j*/
            if (temp > numbers[j])
            {
                /*if so, set the value of temp equal to that number*/
                temp = numbers[j];

                count = j;
            }
        }
        /*If count does not change, i.e it is still equal to 0, then the value of the array at numbers[i] should not change*/
        if (count > 0)
        {
            numbers[count] = numbers[i];
            numbers[i] = temp;
        }
    }
    /*print the values of the array*/
    for(int i = 0; i < length; i++)
    {
        printf("%i ", numbers[i]);
    }
}
