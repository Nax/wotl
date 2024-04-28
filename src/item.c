#include <wotl/item.h>

int IsItemElementalGun(unsigned short itemId)
{
    if (itemId == 0x4c)
        return 1;

    if ((itemId != 0x4B) && (itemId != 0x4A))
        return 0;

    return 1;
}
