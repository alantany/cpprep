#include "d:\cpp\gitrep\cpprep\classman.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

class * insert(int n)
{
    class *head = NULL, *pre = NULL;
    for (int i = 0; i<n; i++)
    {
        class * temp = malloc(sizeof(class));
        printf("请输入课程名称:");
        scanf("%s", temp->class);
        printf("请输入课程编号:");
        scanf("%s", temp->class_id);

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
void show(class * head)
{
    class *p = head;
    while (p)
    {
        printf("\n%s\t%c\t%ld\n", p->class, p->class_id);
        p = p->next;
    }
}
class * delete(class * head, int * class_id)
{
    class *p = head;
    class *before = NULL, *me = NULL, *t = NULL;
    while (p)
    {
        if (strcmp(p->class_id, class_id) == 0)
        {
            before = t;
            me = p;
            break;
        }
        t = p;
        p = p->next;

    }
    if (p)
    {
        if (before == NULL&&me != NULL)
        {
            head = me->next;
            free(me);
        }
        else if (before != NULL&&me->next != NULL)
        {
            before->next = me->next;
            free(me);
        }
        else if (before != NULL&&me->next == NULL)
        {
            before->next = NULL;
            free(me);
        }
    }
    return head;
}
