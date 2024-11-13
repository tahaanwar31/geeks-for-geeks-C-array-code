#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int array[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	int flag=0,num=1;
	while (flag==0)
	{
		flag=1;
		for (int i=0;i<n;i++)
		{
			if (array[i]==num)
			{
				flag=0;
				break;
			}
		}
		if (num>=n)
		{
			break;
		}
		num=num+1;
	}
	printf("%d",num);
}
	
