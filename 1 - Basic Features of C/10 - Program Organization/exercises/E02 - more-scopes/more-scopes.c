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
 * (a) b (external),
 *     c (external),
 *     b (internal),
 *     d (internal)
 *
 * (b) b (external),
 *     c (external),
 *     c (internal),
 *     a (parameter),
 *
 * (c) a (internal block),
 *     d (internal block)
 *
 * (d) b (external),
 *     c (external),
 *     c (internal),
 *     d (internal)
 */