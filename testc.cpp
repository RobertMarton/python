#include <stdio.h>
#include <string.h>
#define MAX 101
struct stu{
	char name[15] ;
	char tel[15] ;
} ;
int readin(struct stu *b)
{
	int n = 0 , i = 0 ;
	while(1)
	{
	scanf("%s", b[i].name) ;
	if(!strcmp(b[i].name, "#"))
		break ;
		scanf("%s",b[i].tel) ;
	//break ;
	i++ ;
	n++ ;}

	return n ;
}

void search(struct stu *c, char *d, int n)
{
	//struct stu t ;
	int i=0;
	//scanf("%s", d) ;
	while(1)
	{
	if(!strcmp(c[i].name, d))
{		printf("%s", c[i].tel) ;

		break ;
}
	//break ;
	else 
	i++ ;
	n-- ;

	if(n==0)
		{printf("can't find") ;
		break ;
	}
}

}

int main()
{
	/*struct srt ss, t ;
	input () ;
	scanf("%s", t) ;
	search() ;
	return 0 ;*/
	struct stu a[MAX] ;
	char name[15] ;
	int num ;
	num = readin(a) ;
	printf("Please input:\n");
	scanf("%s", name ) ;
	search(a, name, num) ;
	return 0 ;

}
