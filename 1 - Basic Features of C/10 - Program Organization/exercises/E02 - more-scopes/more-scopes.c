/** Program Organization Exercise 02 - more-scopes.c */

int b, c;

void f(void)
{
    int b, d;
}

void g(int a)
{
    int c;
    {
        int a, d;
    }
}

int main(void)
{
    int c, d;
}

/**
 * (a) b (local)
 *     d (local)
 *     c (external)
 *
 * (b) c (local)
 *     a (parameter)
 *     b (external)
 *
 * (c) a (block)
 *     d (block)
 *     c (local)
 *
 * (d) c (local)
 *     d (local)
 *     b (external)
 */