/* Functions Exercise 01 */

double triangle_area(double base, double height)
{
    double product;
    product = base * height;
    return product / 2;
}

/* The first error is on the first line, the parameter height
 * requires a double type to be put before is declaraction.
 *
 * The second error is that the 'double product' line needs
 * to be within the function, otherwise the program will not
 * compile.
 */
