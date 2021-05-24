#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int ans;
	srand(time(NULL));
	ans = rand() % 7;	
	switch (ans)
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
