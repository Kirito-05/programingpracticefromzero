#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
 void muen()
{
	 printf(" ___________________________________________\n");
	 printf("|                                           |\n");
	 printf("|                猜数字游戏                 |\n");
	 printf("|                                           |\n");
	 printf("|                 1-开始                    |\n");
	 printf("|                                           |\n");
	 printf("|                 2-退出                    |\n");
	 printf("|                                           |\n");
	 printf("|___________________________________________|\n");
}
 void game()
 {
 game_start:
	 char ch = 'N';
	 int a = 0, b = 0, x = 0, times = 0;
	 printf("请输入随机数生成的范围\n最小值：");
	 scanf("%d", &a);
	 printf("最大值：");
	 scanf("%d", &b);
	 int random_num = rand() % (b - a + 1) + a;
	 printf("开始猜测：");

	 clock_t start_time = clock();
	 while (1)
	 {
		 scanf("%d", &x);
		 times++;
		 if (x == random_num)
		 {
			 clock_t end_time = clock();
			 printf("猜对了！！！\n所用次数：%d次\n所用时间：%lf秒\n", times, (double)(end_time - start_time) / CLOCKS_PER_SEC);
			 break;
		 }
		 else if (x < random_num)
		 {
			 printf("猜 小 了T_T，再试一次：");
		 }
		 else
		 {
			 printf("猜 大 了T_T，再试一次：");
		 }
	 }
	 printf("还想再玩一次吗？>:(Y/N)\n");
	 scanf(" %c", &ch);
	 if (ch == 'Y' || ch == 'y')
	 {
		 goto game_start;
	 }
 }
int main()
{
	int muen_choice;
	muen();
	scanf("%d", &muen_choice);
	switch (muen_choice)
	{
	case 1: srand((unsigned int)time(NULL)); game();
	case 2: return 0;
	}
}
