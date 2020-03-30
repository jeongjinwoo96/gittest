#include <stdio.h>
#include <string.h>

struct student
{
	int	number;
	char name[10];
	int rank;
};

int main(void)
{
	struct student s[10];
	int i,j,temp,a;
	char t[10];
	for (i = 0; i < 10; i++)
	{
		printf("�й��� �Է��Ͻÿ�: ");
		scanf_s("%d", &s[i].number);
		getchar();
		printf("�̸��� �Է��Ͻÿ�: ");
		gets(s[i].name);
		printf("����� �Է��Ͻÿ�: ");
		scanf_s("%d", &s[i].rank);
		getchar();
	}
	for (i = 0; i < 9; i++)
	{
		for (j = i+1; j < 10; j++)
		{
			if (strcmp(s[i].name, s[j].name) == 1)
			{
				strcpy(t, s[i].name);
				strcpy(s[i].name, s[j].name);
				strcpy(s[j].name, t);
				temp = s[i].number;
				s[i].number = s[j].number;
				s[j].number = temp;
				temp = s[i].rank;
				s[i].rank = s[j].rank;
				s[j].rank = temp;
			}
		}
	}
	printf("ã�� �̸��� �Է��ϼ���: ");
	gets(t);
	a=repeat(s, t);
	printf("ã�� �л��� �й�,����,����� %d, %s, %d�Դϴ�.", s[a].number, s[a].name, s[a].rank);
	return 0;
}

int repeat(struct student s[], char target[]) {
	int low = 0;
	int high = 9;
	int mid;

	while (low <= high) {
		mid = (low + high) / 2;
		if (s[mid].name == target)
			return mid;
		else if (strcmp(s[mid].name, target) == 1)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}