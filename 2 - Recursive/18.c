#include<stdio.h>

 



int primo(int n, int i, int quant)
{
		
	if(i==n)
	{
		return 0;
	}
	
	if(n%i==0)
	{
		quant++;
	}
	
	return(quant+primo(n, i+1, quant));

}

 




int main()
{
	int n;
	
	printf("\nDigite um n�mero: ");
	scanf("%d", &n);

	if(primo(n, 2, 0)==0)
	{
		printf("\n\nO numero %d � primo", n);
	}
	else
	{
		printf("\n\nN�o � primo");
	}
	

}






