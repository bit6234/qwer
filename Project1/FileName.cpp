/*
#include <stdio.h>
#pragma warning(disable:4996)

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void ShowPosition(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void)
{
	point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int main(void)
{
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);
	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

void ShowPersonInfo(Person man)
{
	printf("name: %s \n", man.name);
	printf("phone:%s \n", man.phoneNum);
	printf("age: %d \n", man.age);
}

Person ReadPersonInfo(void)
{
	Person man;
	printf("name? "); scanf("%s", man.name);
	printf("phone?"); scanf("%s", man.phoneNum);
	printf("age? ");  scanf("%d", &man.age);
	return man;
}

int main(void)
{
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
	return 0;
}
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void OrgSymTrans(Point* ptr)
{
	ptr -> xpos = (ptr->xpos) * -1;
	ptr -> ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos)
{
	printf("[%d,%d] \n", pos.xpos, pos.ypos);
}

int main(void)
{
	Point pos = { 7,-5 };
	OrgSymTrans(&pos);
	ShowPosition(pos);
	OrgSymTrans(&pos);
	ShowPosition(pos);
	return 0;
}
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

int main(void)
{
	Point pos1 = { 1,2 };
	Point pos2;
	pos2 = pos1;

	printf("크기: %d \n", sizeof(pos1));
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("크기: %d \n", sizeof(pos2));
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
	return 0;
}
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

Point AddPoint(Point pos1, Point pos2)
{
	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
}

Point MinPoint(Point pos1, Point pos2)
{
	Point pos = {pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos};
	return pos;
}

int main(void)
{
	Point pos1 = { 5,6 };
	Point pos2 = { 2,9 };
	Point result;

	result = AddPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	result = MinPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	return 0;
}
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

int main(void)
{
	Point pos1 = { 1,2 };
	Point pos2 = { 5,7 };


	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

typedef struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
}Student;

void ShowStudentInfo(Student* sptr)
{
	printf("학생 이름:%s \n", sptr->name);
	printf("학생 고유번호:%s \n", sptr->stdnum);
	printf("학교 이름:%s \n", sptr->school);
	printf("선택 전공: % s \n", sptr->major);
	printf("학년:%s \n", sptr->year);
}

int main(void)
{
	Student arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("이름: "); scanf("%s", arr[i].name);
		printf("번호: "); scanf("%s", arr[i].stdnum);
		printf("학교: "); scanf("%s", arr[i].school);
		printf("전공: "); scanf("%s", arr[i].major);
		printf("학년: "); scanf("%d", arr[i].year);
	}
	for (i = 0; i < 7; i++)
		ShowStudentInfo(&arr[i]);
	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct circle
{
	point cen;
	double rad;
}Circle;

void ShowCircleInfo(Circle* cptr)
{
	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g \n\n", cptr->rad);
}

int main(void)
{
	Circle c1{ {1,2},3.5 };
	Circle c2{ 2,4,3.9 };
	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);
	return 0;
}
#include <stdio.h>

typedef struct sbox
{
	int mem1;
	int mem2;
	double mem3;
}SBox;

typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
}UBox;

int main(void)
{
	SBox sbx;
	UBox ubx;
	printf("%P %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
	printf("%P %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
	printf("%d %d \n", sizeof(SBox), sizeof(UBox));
}
#pragma warning(disable:4996)
#include <stdio.h>

typedef struct dbshort
{
	unsigned short upper;
	unsigned short lower;
}DBShort;

typedef union rdbuf
{
	int iBuf;
	char bBuf[4];
	DBShort sBuf;
}RDBuf;

int main(void)
{
	RDBuf buf;
	printf("정수 입력: ");
	scanf("%d", &(buf.iBuf));

	printf("상위 2바이트: %u \n", buf.sBuf.upper);
	printf("상위 2바이트: %u \n", buf.sBuf.lower);
	printf("상위 1바이트 아스키 코드:%c \n", buf.bBuf[0]);
	printf("상위 1바이트 아스키 코드:%c \n", buf.bBuf[3]);
}
#include <stdio.h>
typedef enum syllable
{
	Do = 1, Re = 2, mi = 3, Fa = 4, So = 5, La = 6,  Ti = 7
}Syllable;

void Sound(Syllable sy)
{
	switch (sy)
	{
	case Do:
		puts("도는 하얀 도라지 ♪"); return;
	case Re:
		puts("레는 둥근 레코드 ♩"); return;
	case mi:
		puts("미는 파란 미나리 ♩♪"); return;
	case Fa:
		puts("파는 예쁜 파랑새 ♪♭"); return;
	case So:
		puts("솔은 작은 솔방울 ♩♪♪"); return;
	case La:
		puts("라는 라디오고요~ ♪♩♭♩"); return;
	case Ti:
		puts("시는 졸졸시넷물 ♩♭♩♪"); return;
	}
	puts("다 함께 부르세~ 도레미파 솔라시도 솔 도 ~ 짠~");
}

int main(void)
{
	Syllable tone;
	for (tone = Do; tone <= Ti; tone+=)
		Sound(tone);
	return 0;	
}
#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	FILE* fp = fopen("data.txt", "wt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return-1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	fp = fopen("text.txt", "rt");

	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));

	fclose(fp);
	return 0;
}

#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	long fpos;
	int i;

	FILE* fp = fopen("text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	fp = fopen("text.txt", "rt");

	for (i = 0; i < 4; i++)
	{
		putchar(fgetc(fp));
		fpos = ftell(fp);
		fseek(fp, -1, SEEK_END);
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);
	}
	fclose(fp);
	return 0;
}
*/
/*
#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	fp = fopen("text.txt", "rt");

	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));

	fclose(fp);
	return 0;
}
*/

/*
#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	fp = fopen("text.txt", "rt");
	
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));

	fclose(fp);
	return 0;
}

void func2(int n)
{
	int num3 = n + 1;
}
void func1(int n)
{
	int num2 = n + 1;
	func2(num2);
}

int main(void)
{
	int num1 = 20;
	func1(num1);
	return 0;
}

#include <stdio.h>

#include <stdio.h>

char* ReadUserName(void)
{
	char name[30];
	printf("What's your name? ");
	gets_s(name);
	return name;
}

int main(void)
{
	char* name1;
	char* name2;
	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);
	return 0;
}
#include <stdio.h>
#include <string.h>
char name[30];

char* ReadUserName(void)
{
	printf("What's your name? ");
	gets_s(name);
	return name;
}

int main(void)
{
	char* name1;
	char* name2;
	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);

	printf("name1: %s \n", name1);
	printf("name2: %s \n", name2);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* ptr1 = (int*)malloc(sizeof(int));
	int* ptr2 = (int*)malloc(sizeof(int)*7);
	int i;

	*ptr1 = 20;
	for (i = 0; i < 7; i++)
		ptr2[i] = i + 1;

	printf("%d \n", * ptr1);
	for (i = 0; i < 7; i++)
		printf("%d ", ptr2[i]);

	free(ptr1);
	free(ptr2);
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

char* ReadUserName(void)
