#include <wotl/item.h>

int IsItemElementalGun(unsigned short itemId)
{
    if (itemId == 0x4c)
        return 1;

    if ((itemId != 0x4B) && (itemId != 0x4A))
        return 0;

    return 1;
}

int IsItemOnion(unsigned short itemId)
{
    if (itemId == 0x136)
        return 1;

    if ((itemId != 0x12d) && (itemId != 0x125) && (itemId != 0x120) && (itemId != 0x106))
        return 0;

    return 1;
}
