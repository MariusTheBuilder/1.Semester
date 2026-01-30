#include <stdio.h>

typedef struct {
    double a;
    char   b;
    int    c;
} s_t;

void foo(const s_t *x) {
    printf("%lf, %c, %d\n", x->a, x->b, x->c);
}

int main(void) {
    s_t x;

    x.c = 9000;
    x.b = 'X';
    x.a = 12.345;

    foo(&x);
    return 0;
}

#include <stdio.h>

void load(int *x) {
    printf("x var %d, ", *x);
    scanf("%d", x);
}

int main(void) {
    int x = 0;
    load(&x);
    printf("x er nu %d.", x);
    return 0;
}

node_t* find_last(node_t* node, int k) {

    node_t* r = NULL;

    while (node != NULL) {
        if (node->key == k) {
            r = node;
        }
        node = node->next;
    }

    return r;
}