#include <wotl.h>

CONST ItemData* Item_GetData(u16 itemId)
{
    CONST ItemData* data;

    if (itemId < 0x100)
    {
        data = &kItemTable[itemId];
    }
    else
    {
        data = &kItemTable2[itemId - 0x100];
    }

    return data;
}
