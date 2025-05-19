#include <wotl.h>

int Item_IsElementalGun(u16 itemId)
{
    if (itemId == ITEM_BLASTER)
        return 1;

    if ((itemId != ITEM_BLAZE_GUN) && (itemId != ITEM_GLACIAL_GUN))
        return 0;

    return 1;
}

int Item_IsOnion(u16 itemId)
{
    if (itemId == ITEM_ONION_GLOVES)
        return 1;

    if ((itemId != ITEM_ONION_ARMOR) && (itemId != ITEM_ONION_HELM) && (itemId != ITEM_ONION_SHIELD) && (itemId != ITEM_ONION_SWORD))
        return 0;

    return 1;
}

int Item_IsMinerva(u16 itemId)
{
    switch (itemId)
    {
    case ITEM_MINERVA_BUSTIER:
        return 1;
    }

    return 0;
}
