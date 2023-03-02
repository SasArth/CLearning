#include <stdio.h>

int main()
{
	int i;
	int x[5] = {0, 14, 1, 7, 11};
  char y[] = "SAS";
	
  printf("%d",x[0]);
  printf("%c",y);
	scanf("%d",&x[0]);
  
  for(i = 0; i < 5; i++){
     printf("\nArray element %d: %d", i, x[i]);
  }
	
	return 0;
}
