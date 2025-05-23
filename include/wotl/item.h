#ifndef WOTL_ITEM_H
#define WOTL_ITEM_H

#include <wotl/common.h>
#include <wotl/types.h>

#define ITEM_NONE                   0x00
#define ITEM_DAGGER                 0x01
#define ITEM_MYTHRIL_KNIFE          0x02
#define ITEM_BLIND_KNIFE            0x03
#define ITEM_MAGE_MASHER            0x04
#define ITEM_PLATINUM_DAGGER        0x05
#define ITEM_MAIN_GAUCHE            0x06
#define ITEM_ORICHALCUM_DIRK        0x07
#define ITEM_ASSASSINS_DAGGER       0x08
#define ITEM_AIR_KNIFE              0x09
#define ITEM_ZWILL_STRAIGHTBLADE    0x0a
#define ITEM_NINJA_BLADE            0x0b
#define ITEM_KUNAI                  0x0c
#define ITEM_KODACHI                0x0d
#define ITEM_NINJA_LONGBLADE        0x0e
#define ITEM_SPELLBINDER            0x0f
#define ITEM_SASUKES_BLADE          0x10
#define ITEM_IGA_BLADE              0x11
#define ITEM_KOGA_BLADE             0x12
#define ITEM_BROADSWORD             0x13
#define ITEM_LONGSWORD              0x14
#define ITEM_IRON_SWORD             0x15
#define ITEM_MYTHRIL_SWORD          0x16
#define ITEM_BLOOD_SWORD            0x17
#define ITEM_CORAL_SWORD            0x18
#define ITEM_ANCIENT_SWORD          0x19
#define ITEM_SLEEP_BLADE            0x1a
#define ITEM_PLATINUM_SWORD         0x1b
#define ITEM_DIAMOND_SWORD          0x1c
#define ITEM_ICEBRAND               0x1d
#define ITEM_RUNEBLADE              0x1e
#define ITEM_NAGNAROK               0x1f
#define ITEM_MATERIA_BLADE          0x20
#define ITEM_DEFENDER               0x21
#define ITEM_SAVE_THE_QUEEN         0x22
#define ITEM_EXCALIBUR              0x23
#define ITEM_RAGNAROK               0x24
#define ITEM_CHAOS_BLADE            0x25
#define ITEM_ASHURA                 0x26
#define ITEM_KOTETSU                0x27
#define ITEM_OSAFUNE                0x28
#define ITEM_MURASAME               0x29
#define ITEM_AMA_NO_MURAKAMO        0x2a
#define ITEM_KIYOMORI               0x2b
#define ITEM_MURAMASA               0x2c
#define ITEM_KIKU_ICHIMONJI         0x2d
#define ITEM_MASAMUNE               0x2e
#define ITEM_CHIRIJIRADEN           0x2f
#define ITEM_BATTLE_AXE             0x30
#define ITEM_GIANTS_AXE             0x31
#define ITEM_SLASHER                0x32
#define ITEM_ROD                    0x33
#define ITEM_THUNDER_ROD            0x34
#define ITEM_FLAME_ROD              0x35
#define ITEM_ICE_ROD                0x36
#define ITEM_POISON_ROD             0x37
#define ITEM_WIZARDS_ROD            0x38
#define ITEM_DRAGON_ROD             0x39
#define ITEM_ROD_OF_FAITH           0x3a
#define ITEM_OAK_STAFF              0x3b
#define ITEM_WHITE_STAFF            0x3c
#define ITEM_HEALING_STAFF          0x3d
#define ITEM_SERPENT_STAFF          0x3e
#define ITEM_MAGES_STAFF            0x3f
#define ITEM_GOLDEN_STAFF           0x40
#define ITEM_ZEUS_MACE              0x41
#define ITEM_STAFF_OF_THE_MAGI      0x42
#define ITEM_IRON_FLAIL             0x43
#define ITEM_FLAME_MACE             0x44
#define ITEM_MORNING_STAR           0x45
#define ITEM_SCORPION_TAIL          0x46
#define ITEM_ROMANDAN_PISTOL        0x47
#define ITEM_MYTHRIL_GUN            0x48
#define ITEM_STONESHOOTER           0x49
#define ITEM_GLACIAL_GUN            0x4a
#define ITEM_BLAZE_GUN              0x4b
#define ITEM_BLASTER                0x4c
#define ITEM_BOWGUN                 0x4d
#define ITEM_KNIGHTSLAYER           0x4e
#define ITEM_CROSSBOW               0x4f
#define ITEM_POISON_BOW             0x50
#define ITEM_HUNTING_BOW            0x51
#define ITEM_GASTROPHETES           0x52
#define ITEM_LONGBOW                0x53
#define ITEM_SILVER_BOW             0x54
#define ITEM_ICE_BOW                0x55
#define ITEM_LIGHTNING_BOW          0x56
#define ITEM_WINDSLASH_BOW          0x57
#define ITEM_MYTHRIL_BOW            0x58
#define ITEM_ARTEMIS_BOW            0x59
#define ITEM_YOICHI_BOW             0x5a
#define ITEM_PERSEUS_BOW            0x5b
#define ITEM_LAMIAS_HARP            0x5c
#define ITEM_BLOODSTRING_HARP       0x5d
#define ITEM_FAERIE_HARP            0x5e
#define ITEM_BATTLE_FOLIO           0x5f
#define ITEM_BESTIARY               0x60
#define ITEM_PAPYRUS_CODEX          0x61
#define ITEM_OMNILEX                0x62
#define ITEM_JAVELIN                0x63
#define ITEM_SPEAR                  0x64
#define ITEM_MYTHRIL_SPEAR          0x65
#define ITEM_PARTISAN               0x66
#define ITEM_OBELISK                0x67
#define ITEM_HOLY_LANCE             0x68
#define ITEM_DRAGON_WHISKER         0x69
#define ITEM_JAVELIN2               0x6a
#define ITEM_CYPRESS_POLE           0x6b
#define ITEM_BATTLE_BAMBOO          0x6c
#define ITEM_MUSK_POLE              0x6d
#define ITEM_IRON_FAN               0x6e
#define ITEM_GOKUU_POLE             0x6f
#define ITEM_IVORY_POLE             0x70
#define ITEM_EIGHT_FLUTED_POLE      0x71
#define ITEM_WHALE_WHISKER          0x72
#define ITEM_CROAKADILE_BAG         0x73
#define ITEM_FALLINGSTAR_BAG        0x74
#define ITEM_PANTHERSKIN_BAG        0x75
#define ITEM_HYDRASCALE_BAG         0x76
#define ITEM_DAMASK_CLOTH           0x77
#define ITEM_CASHMERE               0x78
#define ITEM_WYRMWEAVE_SILK         0x79
#define ITEM_SHURIKEN               0x7a
#define ITEM_FUMA_SHURIKEN          0x7b
#define ITEM_YAGYU_DARKROOD         0x7c
#define ITEM_FLAMEBURST_BOMB        0x7d
#define ITEM_SNOWMELT_BOMB          0x7e
#define ITEM_SPARK_BOMB             0x7f
#define ITEM_ESCUTCHEON             0x80
#define ITEM_BUCKLER                0x81
#define ITEM_BRONZE_SHIELD          0x82
#define ITEM_ROUND_SHIELD           0x83
#define ITEM_MYTHRIL_SHIELD         0x84
#define ITEM_GOLDEN_SHIELD          0x85
#define ITEM_ICE_SHIELD             0x86
#define ITEM_FLAME_SHIELD           0x87
#define ITEM_AEGIS_SHIELD           0x88
#define ITEM_DIAMOND_SHIELD         0x89
#define ITEM_PLATINUM_SHIELD        0x8a
#define ITEM_CRYSTAL_SHIELD         0x8b
#define ITEM_GENJI_SHIELD           0x8c
#define ITEM_KAISER_SHIELD          0x8d
#define ITEM_VENETIAN_SHIELD        0x8e
#define ITEM_ESCUTCHEON2            0x8f
#define ITEM_LEATHER_HELM           0x90
#define ITEM_BRONZE_HELM            0x91
#define ITEM_IRON_HELM              0x92
#define ITEM_BARBUT                 0x93
#define ITEM_MYTHRIL_HELM           0x94
#define ITEM_GOLDEN_HELM            0x95
#define ITEM_CLOSE_HELMET           0x96
#define ITEM_DIAMOND_HELM           0x97
#define ITEM_PLATINUM_HELM          0x98
#define ITEM_CIRCLET                0x99
#define ITEM_CRYSTAL_HELM           0x9a
#define ITEM_GENJI_HELM             0x9b
#define ITEM_GRAND_HELM             0x9c
#define ITEM_LEATHER_CAP            0x9d
#define ITEM_PLUMED_HAT             0x9e
#define ITEM_RED_HOOD               0x9f
#define ITEM_HEADGEAR               0xa0
#define ITEM_WIZARDS_HAT            0xa1
#define ITEM_GREEN_BERET            0xa2
#define ITEM_HEADBAND               0xa3
#define ITEM_CELEBRANTS_MITER       0xa4
#define ITEM_BLACK_COWL             0xa5
#define ITEM_GOLD_HAIRPIN           0xa6
#define ITEM_LAMBENT_HAT            0xa7
#define ITEM_THIEFS_CAP             0xa8
#define ITEM_CACHUSHA               0xa9
#define ITEM_BARETTE                0xaa
#define ITEM_RIBBON                 0xab
#define ITEM_LEATHER_ARMOR          0xac
#define ITEM_LINEN_CUIRASS          0xad
#define ITEM_BRONZE_ARMOR           0xae
#define ITEM_CHAINMAIL              0xaf
#define ITEM_MYTHRIL_ARMOR          0xb0
#define ITEM_PLATE_MAIL             0xb1
#define ITEM_GOLDEN_ARMOR           0xb2
#define ITEM_DIAMOND_ARMOR          0xb3
#define ITEM_PLATINUM_ARMOR         0xb4
#define ITEM_CARABINER_MAIL         0xb5
#define ITEM_CRYSTAL_MAIL           0xb6
#define ITEM_GENJI_ARMOR            0xb7
#define ITEM_MIRROR_MAIL            0xb8
#define ITEM_MAXIMILLIAN            0xb9
#define ITEM_CLOTHING               0xba
#define ITEM_LEATHER_CLOTHING       0xbb
#define ITEM_LEATHER_PLATE          0xbc
#define ITEM_RINGMAIL               0xbd
#define ITEM_MYTHRIL_VEST           0xbe
#define ITEM_ADAMANT_VEST           0xbf
#define ITEM_WIZARD_CLOTHING        0xc0
#define ITEM_BRIGANDINE             0xc1
#define ITEM_JUJITSU_GI             0xc2
#define ITEM_POWER_GARB             0xc3
#define ITEM_GAIA_GEAR              0xc4
#define ITEM_NINJA_GEAR             0xc5
#define ITEM_BLACK_GARB             0xc6
#define ITEM_RUBBER_SUIT            0xc7
#define ITEM_HEMPEN_ROBE            0xc8
#define ITEM_SILKEN_ROBE            0xc9
#define ITEM_WIZARDS_ROBE           0xca
#define ITEM_CHAMELEON_ROBE         0xcb
#define ITEM_WHITE_ROBE             0xcc
#define ITEM_BLACK_ROBE             0xcd
#define ITEM_LUMINOUS_ROBE          0xce
#define ITEM_LORDLY_ROBE            0xcf
#define ITEM_BATTLE_BOOTS           0xd0
#define ITEM_SPIKED_BOOTS           0xd1
#define ITEM_GERMINAS_BOOTS         0xd2
#define ITEM_RUBBER_BOOTS           0xd3
#define ITEM_WINGED_BOOTS           0xd4
#define ITEM_HERMES_SHOES           0xd5
#define ITEM_RED_SHOES              0xd6
#define ITEM_POWER_GAUNTLET         0xd7
#define ITEM_GENJI_GLOVE            0xd8
#define ITEM_MAGEPOWER_GLOVE        0xd9
#define ITEM_BRACER                 0xda
#define ITEM_REFLECT_RING           0xdb
#define ITEM_PROTECT_RING           0xdc
#define ITEM_MAGICK_RING            0xdd
#define ITEM_CURSED_RING            0xde
#define ITEM_ANGEL_RING             0xdf
#define ITEM_DIAMOND_BRACELET       0xe0
#define ITEM_JADE_ARMLET            0xe1
#define ITEM_JAPA_MALA              0xe2
#define ITEM_NU_KHAI_ARMBAND        0xe3
#define ITEM_GUARDIAN_BRACELET      0xe4
#define ITEM_SHOULDER_CAPE          0xe5
#define ITEM_LEATHER_CLOAK          0xe6
#define ITEM_MAGES_CLOAK            0xe7
#define ITEM_ELVEN_CLOAK            0xe8
#define ITEM_VAMPIRE_CAPE           0xe9
#define ITEM_FEATHERWEAVE_CAPE      0xea
#define ITEM_INVISIBILITY_CLOAK     0xeb
#define ITEM_CHANTAGE               0xec
#define ITEM_CHERCHE                0xed
#define ITEM_SEPTIEME               0xee
#define ITEM_SORTILEGE              0xef
#define ITEM_POTION                 0xf0
#define ITEM_HI_POTION              0xf1
#define ITEM_X_POTION               0xf2
#define ITEM_ETHER                  0xf3
#define ITEM_HI_ETHER               0xf4
#define ITEM_ELIXIR                 0xf5
#define ITEM_ANTIDOTE               0xf6
#define ITEM_EYE_DROPS              0xf7
#define ITEM_ECHO_HERBS             0xf8
#define ITEM_MAIDENS_KISS           0xf9
#define ITEM_GOLD_NEEDLE            0xfa
#define ITEM_HOLY_WATER             0xfb
#define ITEM_REMEDY                 0xfc
#define ITEM_PHOENIX_DOWN           0xfd
#define ITEM_RANDOM                 0xfe
#define ITEM_TERMINATOR             0xff
#define ITEM_CHAOSBRINGER           0x100
#define ITEM_DEATHBRINGER           0x101
#define ITEM_ARONDIGHT              0x102
#define ITEM_BALMUNG                0x103
#define ITEM_VALHALLA               0x104
#define ITEM_MOONBLADE              0x105
#define ITEM_ONION_SWORD            0x106
#define ITEM_RAS_ALGETHI            0x107
#define ITEM_FOMALHAUT              0x108
#define ITEM_FRANCISCA              0x109
#define ITEM_GOLDEN_AXE             0x10a
#define ITEM_OROCHI                 0x10b
#define ITEM_MOONSILK_BLADE         0x10c
#define ITEM_NIRVANA                0x10d
#define ITEM_DREAMWAKER             0x10e
#define ITEM_STARDUST_ROD           0x10f
#define ITEM_CROWN_SCEPTER          0x110
#define ITEM_VESPER                 0x111
#define ITEM_SAGITTARIUS_BOW        0x112
#define ITEM_DURANDAL               0x113
#define ITEM_GAE_BOLG               0x114
#define ITEM_GUNGNIR                0x115
#define ITEM_UNK278                 0x116
#define ITEM_UNK279                 0x117
#define ITEM_UNK280                 0x118
#define ITEM_UNK281                 0x119
#define ITEM_UNK282                 0x11a
#define ITEM_UNK283                 0x11b
#define ITEM_UNK284                 0x11c
#define ITEM_UNK285                 0x11d
#define ITEM_UNK286                 0x11e
#define ITEM_UNK287                 0x11f
#define ITEM_ONION_SHIELD           0x120
#define ITEM_REVERIE_SHIELD         0x121
#define ITEM_UNK290                 0x122
#define ITEM_UNK291                 0x123
#define ITEM_VANGUARD_HELM          0x124
#define ITEM_ONION_HELM             0x125
#define ITEM_ACACIA_HAT             0x126
#define ITEM_BRASS_CORONET          0x127
#define ITEM_UNK296                 0x128
#define ITEM_UNK297                 0x129
#define ITEM_UNK298                 0x12a
#define ITEM_UNK299                 0x12b
#define ITEM_GRAND_ARMOR            0x12c
#define ITEM_ONION_ARMOR            0x12d
#define ITEM_MINERVA_BUSTIER        0x12e
#define ITEM_MIRAGE_VEST            0x12f
#define ITEM_BRAVE_SUIT             0x130
#define ITEM_SAGES_ROBE             0x131
#define ITEM_UNK306                 0x132
#define ITEM_UNK307                 0x133
#define ITEM_GAIUS_CALIGAE          0x134
#define ITEM_BRIGANDS_GLOVES        0x135
#define ITEM_ONION_GLOVES           0x136
#define ITEM_EMPYREAL_ARMBAND       0x137
#define ITEM_TYNAR_ROUGE            0x138
#define ITEM_SAGES_RING             0x139
#define ITEM_UNK314                 0x13a
#define ITEM_UNK315                 0x13b
#define ITEM_COUNT                  0x13c

typedef struct
{
    u8  palette;
    u8  gfx;
    u8  level;
    u8  flags;
    u8  unk0;
    u8  type;
    u8  unk1;
    u8  attrId;
    u16 price;
    u8  shop;
    u8  unk2;
}
ItemData;

typedef struct
{
    u8 range;
    u8 flags;
    u8 formula;
    u8 unk1;
    u8 wp;
    u8 evade;
    u8 elements;
    u8 statusInflict;
}
ItemWeaponData;

typedef struct
{
    u8 blockPhysical;
    u8 blockMagical;
}
ItemShieldData;

extern CONST ItemData kItemTable[];
extern CONST ItemData kItemTable2[];
extern CONST ItemWeaponData kItemWeaponTable[];
extern CONST ItemWeaponData kItemWeaponTable2[];
extern CONST ItemShieldData kItemShieldTable[];
extern CONST ItemShieldData kItemShieldTable2[];

int Item_IsInvalid(u16 itemId);
int Item_IsNone(u16 itemId);
int Item_IsRandomPlaceholder(u16 itemId);
int Item_IsElementalGun(u16 itemId);
int Item_IsOnion(u16 itemId);
int Item_IsMinerva(u16 itemId);
CONST ItemData* Item_GetData(u16 itemId);

#endif
