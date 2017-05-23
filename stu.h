#pragma once

typedef struct STRclass {
	char class[20];
	int class_id[20];
	struct stu * next;
} class;
class * insert(int);
void show(class *);
class * delete(class *, int *);




