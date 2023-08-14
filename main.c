#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>

#define PRINT_TYPE_SIZE(type) printf("Size of %s: %zu bytes\n", #type, sizeof(type))
#define PRINT_TYPE_RANGE(type, min, max) printf("Value range of %s: %g to %g\n", #type, (double)min, (double)max)

int main() {
    char type_name[20];

    printf("Enter the data type name (or \"all\" to display all): ");
    scanf("%s", type_name);

    if (strcmp(type_name, "all") == 0) {
        PRINT_TYPE_SIZE(int);
        PRINT_TYPE_RANGE(int, INT_MIN, INT_MAX);

        PRINT_TYPE_SIZE(float);
        PRINT_TYPE_RANGE(float, FLT_MIN, FLT_MAX);

        PRINT_TYPE_SIZE(double);
        PRINT_TYPE_RANGE(double, DBL_MIN, DBL_MAX);

        PRINT_TYPE_SIZE(char);
        PRINT_TYPE_RANGE(char, CHAR_MIN, CHAR_MAX);
    } else {
        if (strcmp(type_name, "int") == 0) {
            PRINT_TYPE_SIZE(int);
            PRINT_TYPE_RANGE(int, INT_MIN, INT_MAX);
        } else if (strcmp(type_name, "float") == 0) {
            PRINT_TYPE_SIZE(float);
            PRINT_TYPE_RANGE(float, FLT_MIN, FLT_MAX);
        } else if (strcmp(type_name, "double") == 0) {
            PRINT_TYPE_SIZE(double);
            PRINT_TYPE_RANGE(double, DBL_MIN, DBL_MAX);
        } else if (strcmp(type_name, "char") == 0) {
            PRINT_TYPE_SIZE(char);
            PRINT_TYPE_RANGE(char, CHAR_MIN, CHAR_MAX);
        } else {
            printf("Invalid data type name: %s\n", type_name);
            return 1;
        }
    }

    return 0;
}
