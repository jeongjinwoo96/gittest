#include <stdio.h>
#include <string.h>

struct student {
	char major[10];
	char name[10];
	int p1, p2, p3, p4;

};

int main(void)
{
	struct student s[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("�а����� �Է��Ͻÿ�: ");
		gets(s[i].major);
		printf("�̸��� �Է��Ͻÿ�: ");
		gets(s[i].name);
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d %d %d", &s[i].p1, &s[i].p2, &s[i].p3);
		getchar();
		s[i].p4 = (s[i].p1 + s[i].p2 + s[i].p3) / 3;
	}
	printf("\nIS");
	for (i = 0; i < 3; i++)
	{
		if (strcmp(s[i].major, "IS") == 0)
		{
			printf("\n%s %d %d %d %d", s[i].name, s[i].p1, s[i].p2, s[i].p3, s[i].p4);
		}
	}
	printf("\nIE");
	for (i = 0; i < 3; i++)
	{
		if (strcmp(s[i].major, "IE") == 0)
		{
			printf("\n%s %d %d %d %d", s[i].name, s[i].p1, s[i].p2, s[i].p3, s[i].p4);
		}
	}
	printf("\nURP");
	for (i = 0; i < 3; i++)
	{
		if (strcmp(s[i].major, "URP") == 0)
		{
			printf("\n%s %d %d %d %d", s[i].name, s[i].p1, s[i].p2, s[i].p3, s[i].p4);
		}
	}
	return 0;
}