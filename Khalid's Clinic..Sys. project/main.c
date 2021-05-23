/**
*   C iti graduation project by
* KHALED MOSAAD ZAKARIA ABDULKADER
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "STD_TYPES.h"

extern void ScreenInit(void);
extern u8 ModeSelect(void);

int main(void)
{
    ScreenInit();
    while( ModeSelect());

}