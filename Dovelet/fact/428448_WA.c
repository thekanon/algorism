#include <stdio.h>
#include <string.h>
struct book
{
	int num;
	char title[40];
	char name[40];
	int good;
};
struct book dod[20];

void one();
void input();
void output();
void sname();
void stitle();
int i=1,j;


void main()
{
	
	int n;

	memset(dod,0,sizeof(dod));



	while(1)
	{
		printf("\n\n[메뉴]\n");
		printf("1. 입력\t2. 출력\t3. 검색(저자)\t4. 검색(도서)\t5. 종료\n\n");

		printf("번호선택 : ");
		scanf("%d",&n);
		getchar();

		if(n==1)
			input();

		else if(n==2)
			output();

		else if(n==3)
			sname();

		else if(n==4)
			stitle();
		else if(n==5)
		{
			printf("\n\n프로그램을 종료합니다.\n");
			break;
		}
	}

}		
void input()
{
	printf("제목 : ");
	gets(dod[i].title);

	printf("저자 : ");
	gets(dod[i].name);

	printf("가격 : ");
	scanf("%d",&dod[i].good);

	dod[i].num=i;
	i++;
}
void output()
{
	for(j=1;j<=20;j++)
	{
		if(dod[j].num==0)
			break;

			printf("번호 : %d\n",dod[j].num);

			printf("제목 : %s\n",dod[j].title);

			printf("저자 : %s\n",dod[j].name);

			printf("가격 : %d\n\n\n",dod[j].good);
	}
}
void sname()
{
	char sc[20];

	printf("저자명 : ");
	gets(sc);
		
	for(j=1;j<=20;j++)
	{
		if(strcmp(dod[j].name,sc)==0)
		{
			printf("\n\n번호 : %d\n",dod[j].num);
			printf("제목 : %s\n",dod[j].title);

			printf("저자 : %s\n",dod[j].name);

			printf("가격 : %d\n\n",dod[j].good);
		}
	}
}
void stitle()
{
	char sc[20];

	printf("책 제목 : ");
	gets(sc);
		
	for(j=1;j<=20;j++)
	{
		if(strcmp(dod[j].title,sc)==0)
		{
			printf("\n\n번호 : %d\n",dod[j].num);
			printf("제목 : %s\n",dod[j].title);

			printf("저자 : %s\n",dod[j].name);

			printf("가격 : %d\n\n",dod[j].good);
		}
	}
}
