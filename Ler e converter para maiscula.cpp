#include <stdio.h>	
#include <string.h>
int main()                            
{
    char letra[2];                   
  
    printf( "Insira uma letra minuscula: " );  
    scanf( " %c", &letra );
	printf( "Letra maiscula: %s\n", strupr(letra));  
    
  return 0;
}



