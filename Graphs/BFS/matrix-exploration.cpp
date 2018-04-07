//matrix-exploration

#include <matrix-exploration.h>
#include <iostream>
#define Q 64

matrix-exploration::matrix-exploration()
{
}

int matrix-exploration::top(Path *p)
{
        return p->path[p->len - 1];
}

bool matrix-exploration::visited(Path *p, int x)
{
        for (int i = 0; i < p->len; i++) {
                if (p->path[i] == x) {
                        return true;
                }
        }
        return false;
}

void print_path(Path *p)
{
        for (int i = 0; i < p->len; i++) {
                std::cout << p->path[i] - 1 << endl;
        }
}

matrix-exploration::~matrix-exploration()
{
}
