#include <stdio.h>

int main(void) 
{
int start,end,check,i;
scanf("%d %d ",&start,&end);
while (start < end)
    {
        check = 0;

        for(i = 2; i <= start/2; ++i)
        {
            if(start % i == 0)
            {
                check = 1;
                break;
            }
        }

        if (check == 0)
            printf("%d ", start);

        start++;
    }

	return 0;
}
