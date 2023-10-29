#include <stdio.h>
void pyramid(int n);

int main(void)
{
    pyramid(2);
}

void pyramid(int n)
{
    int init = 1;
    for(int i = 0; i < init; i++)
    {
       printf("#");
    }
    init++;
    if(init < n)
    {
        pyramid(init);
    }
}
