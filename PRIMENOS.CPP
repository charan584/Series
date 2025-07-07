#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n,f=0;
	clrscr();
	printf("Enter any value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
	if(f==0)
		printf("\t%d",i);
	}
	getch();
	return 0;
}