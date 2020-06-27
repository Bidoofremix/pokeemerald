#ifndef GUARD_DNS_UTILS_H
#define GUARD_DNS_UTILS_H

#define DNS_PAL_EXCEPTION   FALSE
#define DNS_PAL_ACTIVE      TRUE
/* Timelapses */
enum
{
    TIME_MIDNIGHT,
    TIME_DAWN,
    TIME_DAY,
    TIME_SUNSET,
    TIME_NIGHTFALL,
    TIME_NIGHT
};
struct LightingColour {
    u8 paletteNum;
    u8 colourNum;
    u16 lightColour;
};

struct DnsPalExceptions {
    bool8 pal[32];
};

void DnsTransferPlttBuffer(void *src, void *dest);
void DnsApplyFilters();
u8 GetDnsTimeLapse(u8 hour);

#endif /* GUARD_DNS_UTILS_H */