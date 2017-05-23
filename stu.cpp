#include "d:\cpp\gitrep\cpprep\stu.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct STRstu {
	char name[10];
	char sex[4];
	long tel[18];
	struct stu * next;
} stu;
stu * insert(int i) {
	stu *head = NULL, *pre = NULL;
	for (int i = 0; i<n; i++)
	{
		stu *temp = malloc(sizeof(struct STRstu::stu));
		printf("输入姓名:");
		scanf("%s", temp->name);
		printf("输入性别:");
		scanf("%s", temp->sex);
		printf("输入电话:");
		scanf("%ld", temp->tel);
		if (head == NULL)
		{
			head = temp;
		}
		if (pre != NULL)
		{
			pre->next = temp;
		}
		pre = temp;
	}
	pre->next = NULL;
	return head;
}
void show(stu *);
struct STRstu * delete(stu *, long *);
void destroy(struct STRstu *);