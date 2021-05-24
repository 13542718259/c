#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int i;
	int ans;
	srand(time(NULL));
	ans = rand() % 7;
	puts("请输入0~6的数");
	scanf_s("%d",&i);
	switch (i)
	{
	case 0:
		puts("\a大吉！");
		break;
	case 1:
		puts("\a中吉！");
		break;
	case 2:
		puts("\a小吉！");
		break;
	case 3:
		puts("\a吉！");
		break;
	case 4:
		puts("\a末凶！");
		break;
	case 5:
		puts("\a凶！");
		break;
	case 6:
		puts("\a大吉！");
		break;
	default:
		break;
	}
	return 0;
}