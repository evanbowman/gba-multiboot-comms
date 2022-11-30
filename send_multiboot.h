#pragma once


#ifdef __cplusplus
extern "C" {
#endif


enum MbResult
{
 mb_result_failure,
 mb_result_success,
};


#define MB_DEFAULT_TIMEOUT 200000


enum MbResult mb_send_rom(u16* begin, // pointer to beginning of multiboot rom
                          u16* end,   // pointer to end of multiboot rom (will be rounded up s.t. (end-begin) % 0x10 == 0)
                          int timeout);


#ifdef __cplusplus
}	   // extern "C"
#endif
