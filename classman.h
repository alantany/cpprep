#ifndef CLASSMAN_H_INCLUDED
#define CLASSMAN_H_INCLUDED

typedef struct STRclass
{
    char classes [20];
    int class_id[20];
    struct stu * next;
} classes;
classes * insert(int);
void show(classes *);
classes * delete(classes *, int *);

#endif // CLASSMAN_H_INCLUDED
