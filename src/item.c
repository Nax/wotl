#include <wotl.h>

int IsItemElementalGun(u16 itemId)
{
    if (itemId == 0x4c)
        return 1;

    if ((itemId != 0x4B) && (itemId != 0x4A))
        return 0;

    return 1;
}

int IsItemOnion(u16 itemId)
{
    if (itemId == 0x136)
        return 1;

    if ((itemId != 0x12d) && (itemId != 0x125) && (itemId != 0x120) && (itemId != 0x106))
        return 0;

    return 1;
}

int IsItemMinerva(u16 itemId)
{
    switch (itemId)
    {
    case 0x12e:
        return 1;
    }

    return 0;
}
