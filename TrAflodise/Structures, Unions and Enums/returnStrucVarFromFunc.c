#include <stdio.h>

struct point{
	int x;
	int y;
};

struct point edit (struct point *p) {
	(p->x)++;
	p->y += 14;
	return *p;
}

void print(struct point *ptr) {
	printf("%d %d\n", ptr ->x, ptr ->y);
}

int main() {
	struct point p1 = {12, 17};
	struct point p2 = {22, 43};
	p1 = edit(&p1);
	p2 = edit(&p2);
	print(&p1);
	print(&p2);
	return 0;
}
