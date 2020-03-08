//random numbers generation
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void principal();

int main()
{
	principal();
	system("pause");
	return 0;
}

void principal()
{
	int choice,number,cont;

	printf("How many numbers do you want? ");
	scanf("%d",&cont);

	for(int i=0; i<cont; i++)
	{
		number=rand()%100;
		printf("\t%d",number);

	}


}
