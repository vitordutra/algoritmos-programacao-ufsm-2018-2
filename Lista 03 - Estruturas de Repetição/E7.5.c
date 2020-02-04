#include <stdio.h>

int main()
{
    int num, max, min;
    int i = 0;

    printf ("Enter four numbers: ");
    scanf ("%d", &num);
    max = min = num;
    
	for (i == 0; i < 3; i++)
    { 
        scanf ("%d", &num);
        if (max < num)
            max = num;
        else if (min > num)
            min = num;
    }

    printf ("The smallest and largest of given four numbers are %d and %d respectively.\n", min,  max);
    return 0;
}
