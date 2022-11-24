#include <stdio.h>

main() /* count lines, spaces, and tabs in input */
{
    int c, nl, nb, nt;

    nl = 0;
    nb = 0;
    nt = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
    printf("lines:%d spaces:%d tabs:%d\n", nl, nb, nt);
}
