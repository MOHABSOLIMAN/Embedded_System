#include<stdio.h>
#include<string.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int a,b,c,;
	char str[100];
	printf("Input string:");
	gets(str);
	a=strlen(str);
	printf("length=%d\n",a);
	b=a;
	b--;
	for(;a>=0;a--)
	{
		if(str[a]==' ')
		{
			for(c=a+1;c<=b;c++)
			{
				printf("%c",str[c]);
			}
			printf(" ");
			b=a-1;
		}
		else if(a==0)
		{
			printf("%c",str[a]);
		}
	}
	return 0;
}
