/*
 * E89 Pedagogical & Technical Lab
 * project:     variadique
 * created on:  2023-01-06 - 14:56 +0100
 * 1st author:  martin.leroy - martin.leroy
 * description: puts pls
 */

#include <unistd.h>
#include "printf.h"

int puts_plus(int channel, const char *str, int rt)
{
    int len;
    int x;

    x = 0;
    len = stu_strlen(str);
    len = write(channel, str, len);
    while (rt > 0) {
        write(channel, "\n", 1);
        x = 1;
        rt = rt - 1;
    }
    if (len == -1) {
        return (-1);
    } else {
        return (len + x);
    }
}
