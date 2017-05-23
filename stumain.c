#include "d:\cpp\gitrep\cpprep\stu.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
int main(int argc, const char * argv[])
{
	int n;
	printf("请输入课程数");
	scanf("%d", &n);
	class *head = insert(n);
	show(head);
	printf("请输入要删除的课程号");
	scanf("%d", &n);
	delete(head, &n);
	printf("删除后的数据:");
	show(head);
	
	system("pause");
	return 0;
}