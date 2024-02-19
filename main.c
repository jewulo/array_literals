#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

// https://jameshfisher.com/2016/12/25/c-array-literal-explicit-indexes/
void test_1()
{
    // Character names can be associated with enumeration constants
    // using arrays with designators:
    enum { RED, GREEN, BLUE };
    const char *nm[] = {
        [BLUE] = "blue",
        [RED] = "red",
        [GREEN] = "green",
    };

    for (int i = 0; i < 3; i++) {
        printf("%i:", i);
        printf("%s\n", nm[i]);
    }
}

// https://jameshfisher.com/2016/12/25/c-array-literal-explicit-indexes/
void test_2()
{
    char* strs[] = {
        [2] = "foo",
        [7] = "bar",
        [9] = "baz"
    };

    for (size_t i = 0; i < sizeof(strs)/sizeof(strs[0]); i++)
        printf("strs[%zu] = %s\n", i, strs[i]);
}

int main()
{
    test_1();
    test_2();
    getchar();

    return 0;
}
