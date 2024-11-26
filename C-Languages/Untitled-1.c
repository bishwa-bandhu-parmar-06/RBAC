#include <stdio.h> 

int main(void)
{ 
    int i, j, k; 
    
	i = 2; 
    j = ‑2; 
    
	if(i) 
      	i‑‑; 
    if(j) 
       	j++; 
    k = i * j; 
    
	printf("%d",k); 
    return 0; 
}