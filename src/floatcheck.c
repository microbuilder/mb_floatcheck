/**
 * Depending on the type of package, there are different
 * compilation rules for this directory.  This comment applies
 * to packages of type "pkg."  For other types of packages,
 * please view the documentation at http://mynewt.apache.org/.
 *
 * Put source files in this directory.  All files that have a *.c
 * ending are recursively compiled in the src/ directory and its
 * descendants.  The exception here is the arch/ directory, which
 * is ignored in the default compilation.
 *
 * The arch/<your-arch>/ directories are manually added and
 * recursively compiled for all files that end with either *.c
 * or *.a.  Any directories in arch/ that don't match the
 * architecture being compiled are not compiled.
 *
 * Architecture is set by the BSP/MCU combination.
 */

#include <ctype.h>
#include "floatcheck/floatcheck.h"

bool
f_is_equal(float a, float b, float epsilon, char *msg)
{
    float c;

    c = a - b;

    if (c < epsilon && -c < epsilon) {
        return 1;
    } else {
        printf("Float Err: %s\n"
               " Expected: %f\n"
               " Received: %f\n"
               "    DELTA: %f\n"
               "  Epsilon: %f\n",
               msg, b, a, c, epsilon);
        return 0;
    }
}

bool
d_is_equal(double a, double b, double epsilon, char *msg)
{
    double c;

    c = a - b;

    if (c < epsilon && -c < epsilon) {
        return 1;
    } else {
        printf("Double Err: %s\n"
               " Expected: %f\n"
               " Received: %f\n"
               "    DELTA: %f\n"
               "  Epsilon: %f\n",
               msg, b, a, c, epsilon);
        return 0;
    }
}

bool
d_is_at_least(double a, double b, char *msg)
{
    if (a >= b) {
        return 1;
    } else {
        printf("Double Err: %s\n"
               " Expected: >= %f\n"
               " Received: %f\n"
               "    DELTA: %f\n",
               msg, b, a, a-b);
        return 0;
    }
}

bool
d_is_less_than(double a, double b, char *msg)
{
    if (a < b) {
        return 1;
    } else {
        printf("Double Err: %s\n"
               " Expected: < %f\n"
               " Received: %f\n"
               "    DELTA: %f\n",
               msg, b, a, a-b);
        return 0;
    }
}

bool
d_is_greater_than(double a, double b, char *msg)
{
    if (a > b) {
        return 1;
    } else {
        printf("Double Err: %s\n"
               " Expected: > %f\n"
               " Received: %f\n"
               "    DELTA: %f\n",
               msg, b, a, a-b);
        return 0;
    }
}

bool
d_is_within(double a, double upper, double lower, char *msg)
{
    if ((a <= upper) || (a >= lower)) {
        return 1;
    } else {
        printf("Double Err: %s\n"
               " Expected: <= %f || >= %f\n"
               " Received: %f\n",
               msg, upper, lower, a);
        return 0;
    }
}
