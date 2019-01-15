// 已知日期计算周几.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("日期转星期几的算法\n");

	int year, month, day, weekday;
	int c, y;

	printf("请输入年份:");
	scanf("%d", &year);


	printf("请输入月份:");
	scanf("%d", &month);

	printf("请输入日期:");
	scanf("%d", &day);

	int iWeekDay = -1;
	if (1 == month || 2 == month)
	{
		month += 12;
		year--;
	}
	iWeekDay = (day + 1 + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;

	weekday = iWeekDay;
	if (iWeekDay == 0)
		weekday = 7;

	printf("星期%d\n", weekday);

	system("pause");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
