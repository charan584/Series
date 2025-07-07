#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n,s=0;
	clrscr();
	printf("Ente limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=0;
		for(j=1;j<=i/2;j++)
			if(i%j==0)
				s+=i;
	}
	if(n==s)
		printf("\t%d",i);
	getch();
	return 0;
}
