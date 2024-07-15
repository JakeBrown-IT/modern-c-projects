/** Section 11 Exercise 02
 * Author -- Jake Brown
 * Title  -- legal-assignment.c
 *
 * (a) p = i;
 * --illegal - p is pointer, i is integer
 *
 * (b) *p = &i;
 * --illegal - *p is pointer, &i is pointer to an integer
 *
 * (c) &p = q;
 * --illegal - &p is pointer to a pointer to an integer, q is pointer to an integer
 *
 * (d) p = &q;
 *--illegal - p is a pointer to an integer, &q is a pointer to a pointer to an integer

 * (e) p = *&q;
 * --legal - p is a pointer to an integer, *&q is a pointer to an integer
 *
 * (f) p = q;
 * --legal - p is a pointer to an integer, q is a pointer to an integer
 *
 * (g) p = *q;
 * --illegal - p is a pointer to an integer, *q is an integer
 *
 * (h) *p = q;
 * --illegal - *p is an integer, q is a pointer to an integer
 *
 * (i) *p = *q;
 * --legal - *p is an integer, *q is an integer
 *
 */

int main(void)
{
    return 0;
}