#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
typedef struct STRclass
{
    char classes [20];
    int class_id[20];
    struct stu * next;
} classes;
classes * insert(int);
void show(classes *);
classes * delete(classes *, int);

int main(int argc, const char * argv[])
{
    int n;
    printf("������γ���");
    scanf("%d", &n);
    classes *head = insert(n);
    show(head);
    printf("������Ҫɾ���Ŀγ̺�");
    scanf("%d", &n);
    delete(head, &n);
    printf("ɾ���������:\n");
    show(head);

    system("pause");
    return 0;
}

classes * insert(int n)
{
    classes *head = NULL, *pre = NULL;
    for (int i = 0; i<n; i++)
    {
        classes * temp = malloc(sizeof(classes));
        printf("������γ�����:");
        scanf("%s", temp->classes);
        printf("������γ̱��:");
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
void show(classes * head)
{
    classes *p = head;
    while (p)
    {
        printf("%s\t",p->classes);
        printf(p->class_id);
        printf("\n");
        p = p->next;
    }
}
classes * delete(classes * head, int  id)
{
    classes *p = head;
    classes *before = NULL, *me = NULL, *t = NULL;
    while (p)
    {
        if ((p->class_id)==id)
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
