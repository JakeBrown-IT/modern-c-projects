/** Program Organization Exercise 01 - simple-scopes.c */

int a;

void f(int b)
{
    int c;
}

void g(void)
{
    int d;
    {
        int e;
    }
}

int main(void)
{
    int f;
}

/**
 * (a) a, b, c
 * (b) a, d, e (only within block)
 * (c) a, d, e
 * (d) a, f
 */