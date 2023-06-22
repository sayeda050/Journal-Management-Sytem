#include<stdio.h>

#include<stdlib.h>

#include "splash.h"
#include <dos.h>


int main (void)
{
    recursiveLoading(0);
    splash();
    system("cls");

    return 0;
}
