/*
 * macOS ARM64 stub implementations for FFmpeg
 * Used when ARM64 optimizations are disabled
 */

#include "libavcodec/fft.h"
#include "libavutil/float_dsp.h"
#include "libavutil/cpu.h"

// Stub implementations for missing ARM64 functions
void ff_fft_init_aarch64(FFTContext *s) {
    // No ARM64 optimizations - use generic implementations
}

void ff_float_dsp_init_aarch64(AVFloatDSPContext *fdsp) {
    // No ARM64 optimizations - use generic implementations  
}

int ff_get_cpu_flags_aarch64(void) {
    // Return no CPU features available
    return 0;
}

size_t ff_get_cpu_max_align_aarch64(void) {
    // Return basic alignment
    return 32;
}
