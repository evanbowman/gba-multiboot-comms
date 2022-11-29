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


enum MbResult mb_send_rom(u16* begin,
                          u16* end,
                          int timeout);


#ifdef __cplusplus
}	   // extern "C"
#endif
