#include "d:\cpp\gitrep\cpprep\stu.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
int main(int argc, const char * argv[])
{
	int n;
	printf("������γ���");
	scanf("%d", &n);
	class *head = insert(n);
	show(head);
	printf("������Ҫɾ���Ŀγ̺�");
	scanf("%d", &n);
	delete(head, &n);
	printf("ɾ���������:");
	show(head);
	
	system("pause");
	return 0;
}