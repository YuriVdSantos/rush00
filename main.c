#include <unistd.h>

void    ft_putchar(char c){
    write(1, &c,1);
}

void rush(int x, int y)
{
    int sX;
    int sY;
    int i;
    int j;

    sX = x -1;
    sY = y - 1;
    i = 0;
    j = 0;
    
    while(i == 0){
        while (j < x)
        {
            if(j == 0){
                ft_putchar('A');
            } else if (j > 0 && j < sX)
            {
                ft_putchar('B');
            }else{
                ft_putchar('A');
            }
            j++;            
        }
        i++;
        
    }

    j = 0;
    i = 1;
    if (i < y)      {
        ft_putchar('\n');
       
        while(i < y){
            while(j < x){
                if(j == 0){
                    ft_putchar('B');
                }else if(j < sX)
                    {
                    ft_putchar(' ');
                }else{
                    ft_putchar('B');
                }
                j++;
            }
            i++;
            j = 0;
            ft_putchar('\n');
        }

        while(i == y){
            while (j < x)
            {
                if(j == 0){
                    ft_putchar('C');
                } else if (j > 0 && j < sX)
                {
                    ft_putchar('B');
                }else{
                    ft_putchar('C');
                }
                j++;            
            }
            i++;
            
        }
    }

}

int	main(void)
{	
	rush(1,1);
	return(0);
}
