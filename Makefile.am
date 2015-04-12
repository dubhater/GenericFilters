warningflags = -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -Wshadow
includeflags = -I$(srcdir)/src/alone -I$(srcdir)/src/common -I$(srcdir)/src/convolution -I$(srcdir)/src/neighbors -I$(srcdir)/src/specific
commonflags = -O2 -fvisibility=hidden $(MFLAGS) $(warningflags) $(includeflags)
AM_CFLAGS = $(commonflags)

lib_LTLIBRARIES = libgenericfilters.la

libgenericfilters_la_SOURCES = src/alone/alone.c \
							   src/alone/alone.h \
							   src/alone/binarize.c \
							   src/alone/invert.c \
							   src/alone/levels.c \
							   src/alone/limiter.c \
							   src/common/common.c \
							   src/common/common.h \
							   src/common/no_simd.h \
							   src/common/sse2.h \
							   src/common/VapourSynth.h \
							   src/convolution/canny.c \
							   src/convolution/canny.h \
							   src/convolution/convolution.c \
							   src/convolution/convolution.h \
							   src/convolution/convolution_hv.c \
							   src/convolution/convolution_hv.h \
							   src/convolution/deflate.c \
							   src/convolution/edge.c \
							   src/convolution/edge_detect_canny.c \
							   src/convolution/edge.h \
							   src/convolution/float_to_dst.c \
							   src/convolution/gaussian_blur.c \
							   src/convolution/inflate.c \
							   src/convolution/prewitt.c \
							   src/convolution/proc_3x3.c \
							   src/convolution/proc_5x5.c \
							   src/convolution/proc_h.c \
							   src/convolution/proc_hv.c \
							   src/convolution/proc_v.c \
							   src/convolution/sobel.c \
							   src/convolution/tedge.c \
							   src/convolution/xxflate.c \
							   src/convolution/xxflate.h \
							   src/neighbors/binarize2.c \
							   src/neighbors/maximum.c \
							   src/neighbors/median.c \
							   src/neighbors/minimum.c \
							   src/neighbors/neighbors.c \
							   src/neighbors/neighbors.h \
							   src/specific/hysteresis.c \
							   src/specific/hysteresis.h

# These source files must not be compiled, because they get included into other source files.
noinst_HEADERS = src/convolution/simd/deflate_sse2.c \
				 src/convolution/simd/edge_detect_canny_sse2.c \
				 src/convolution/simd/float_to_dst_sse2.c \
				 src/convolution/simd/gaussian_blur_sse2.c \
				 src/convolution/simd/inflate_sse2.c \
				 src/convolution/simd/prewitt_sse2.c \
				 src/convolution/simd/proc_3x3_sse2.c \
				 src/convolution/simd/proc_5x5_sse2.c \
				 src/convolution/simd/proc_h_sse2.c \
				 src/convolution/simd/proc_hv_sse2.c \
				 src/convolution/simd/proc_v_sse2.c \
				 src/convolution/simd/sobel_sse2.c \
				 src/convolution/simd/tedge_sse2.c \
				 src/neighbors/simd/maximum_sse2.c \
				 src/neighbors/simd/median_sse2.c \
				 src/neighbors/simd/minimum_sse2.c

libgenericfilters_la_LDFLAGS = -no-undefined -avoid-version $(PLUGINLDFLAGS)

