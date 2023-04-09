#include <stdio.h>
#include "./head/lcd_drvier.h"

int main()
{
    lcd_init();
    lcd_print("hello\n");
    return 0;
}