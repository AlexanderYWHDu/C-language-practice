#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void print(Point *p) {
    printf("(%d, %d)\n", p->x, p->y);
}

void move(Point *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}

int main() {
    Point p = {10, 20};
    print(&p);

    move(&p, 5, -3);
    print(&p);

    return 0;
}