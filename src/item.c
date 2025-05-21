#include <wotl.h>

#if 0
int Item_IsInvalid(u16 itemId)
{
    if (itemId == ITEM_TERMINATOR)
        return 1;

    if (itemId < ITEM_COUNT)
        {}
    else
        return 1;
    return 0;
}
#endif

int Item_IsNone(u16 itemId)
{
    if (itemId != ITEM_NONE)
        {}
    else
        return 1;
    return 0;
}

int Item_IsRandomPlaceholder(u16 itemId)
{
    if (itemId != ITEM_RANDOM)
        {}
    else
        return 1;
    return 0;
}

int Item_IsElementalGun(u16 itemId)
{
    switch (itemId)
    {
        case ITEM_GLACIAL_GUN:
        case ITEM_BLAZE_GUN:
        case ITEM_BLASTER:
            return 1;
        default:
            return 0;
    }
}

int Item_IsOnion(u16 itemId)
{
    switch (itemId)
    {
        case ITEM_ONION_SWORD:
        case ITEM_ONION_SHIELD:
        case ITEM_ONION_HELM:
        case ITEM_ONION_ARMOR:
        case ITEM_ONION_GLOVES:
            return 1;
        default:
            return 0;
    }
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
