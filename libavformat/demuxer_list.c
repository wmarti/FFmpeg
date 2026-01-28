#include "config.h"

static const AVInputFormat * const demuxer_list[] = {
#if CONFIG_WAV_DEMUXER
    &ff_wav_demuxer,
#endif
    NULL };