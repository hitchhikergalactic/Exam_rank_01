#include <unistd.h>
int main (void)
{
    int p;
    p = 0;
    while (p <= 100)
    {
        if (p % 28 == 0)
        write(1, "fizzbuzz", 8);
        else if (p % 4 == 0)
        write (1, "buzz", 4);
        else if (p % 7 == 0)
        write (1, "fizz", 4);
        else
        {
            if (p >= 10)
            write (1, &"0123456789"[p /10], 1);
            write (1, &"0123456789"[p % 10], 1);
        }
        write(1, "\n", 1);
        p++;
    }
    return(0);
}