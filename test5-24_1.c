#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int i;
	int ans;
	srand(time(NULL));
	ans = rand() % 7;
	puts("������0~6����");
	scanf_s("%d",&i);
	switch (i)
	{
	case 0:
		puts("\a�󼪣�");
		break;
	case 1:
		puts("\a�м���");
		break;
	case 2:
		puts("\aС����");
		break;
	case 3:
		puts("\a����");
		break;
	case 4:
		puts("\aĩ�ף�");
		break;
	case 5:
		puts("\a�ף�");
		break;
	case 6:
		puts("\a�󼪣�");
		break;
	default:
		break;
	}
	return 0;
}