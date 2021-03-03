/* generated ldscript.ld */
MEMORY
{
    flash : org = 0x08000000, len = 16K
    ram0  : org = 0x20000000, len = 131072
}

INCLUDE common.ld
