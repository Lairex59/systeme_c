#ifndef __LISTEN_H__
#define __LISTEN_H__

typedef
struct liste_s {
	int elem;
	struct liste_s *next;
} liste_t;

void push(int x);
int pop();

#endif
