#ifndef list
	#define list

typedef struct roll {
	struct roll *next;
	void *data;
} *roll;

void roll_destruct(roll);
int roll_prepend(roll *, void *);
void *roll_fetch(roll *);

#endif
