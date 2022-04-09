#include <stdio.h>                                        
#include <stdlib.h>                                       
#include <time.h>                                         
                                                          
/**                                                       
 * main - function                                        
 *                                                        
 * Return: 0                                              
 */                                                       
int main(void)                                            
{                                                         
        int d;                                            
                                                          
        for (d = 0; d < 9; d++)                          
        {                                                 
                putchar((d * 1) + '0');                               
                                             
        }                                                 
        putchar('\n');                                    
        return (0);                                       
}
