
#include <stdio.h>
#include <stdlib.h>

int str_length(char *str)
{
	int i;
	for (i=0 ; str[i] ;i++)
	{
	}
	return i;
}
void check_string_mirrored(char *str, int size )
{
    int i;
    int mirrored = 1;
    for(i=0; i<size; i++)
    {
        if(str[i] != str[size-i-1]) {
            mirrored = 0;
            break;
        }
    }

    printf("string is");
    printf(mirrored ? "" : " not");
    printf(" mirrored\n");

}
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
    char s[]= "BARBRAB";
    int size = str_length(s);
    check_string_mirrored(s,size);
    return 0;
}
