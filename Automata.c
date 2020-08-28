//automata that accepted a chain that starts with 0 and ends with 0
//alphabet is formed with 0 and 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void principal();
void initial();
void acceptation();
int main()
{
	principal();
	system("pause");
	return 0;
}
void principal()
{
	int chain[10];
	int i,cant,cont;
	printf("This automaton accept all the chains that start with 0 and end with 0\n");
	printf("Enter chain: \n");
	for(i=0; i<10; i++)
	{
		scanf("%d",&chain[i]);	
	}
	
	for(cont=0; cont<10; cont++)
		{
			if(chain[cont]==1)
			{
				printf("Not accepted\n");		
			}else if(chain[cont]==0)
				{
				printf("Accepted\n");
				}
			
		}
}
