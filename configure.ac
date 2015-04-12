AC_INIT([GenericFilters], [1], [https://github.com/myrsloik/GenericFilters/pulls], [GenericFilters], [https://github.com/myrsloik/GenericFilters])

: ${CFLAGS=""}

AM_INIT_AUTOMAKE([foreign no-dist-gzip dist-xz subdir-objects no-define])
AM_SILENT_RULES([yes])

LT_INIT([win32-dll disable-static])

AC_PROG_CC_C99

AC_CANONICAL_HOST


X86="false"
PPC="false"
ARM="false"

AS_CASE(
        [$host_cpu],
        [i?86],   [BITS="32" X86="true"],
        [x86_64], [BITS="64" X86="true"],
        [powerpc*], [PPC="true"],
        [arm*], [ARM="true"] # Maybe doesn't work for all arm systems?
)

AS_CASE(
        [$host_os],
        [cygwin*|mingw*],
        [
         AS_IF(
               [test "x$BITS" = "x32"],
               [
                AC_SUBST([PLUGINLDFLAGS], ["-Wl,--kill-at"])
               ]
         )
        ]
)

AS_IF(
      [test "x$X86" = "xtrue"],
      [
       AC_ARG_ENABLE([x86-simd], AS_HELP_STRING([--enable-x86-simd], [Enable optimisations for x86 CPUs.]))

       AS_IF([test "x$enable_x86_simd" != "xno"], [AC_DEFINE([USE_X86_INTRINSICS])])


       AC_SUBST([MFLAGS], ["-mfpmath=sse -msse2"])
      ]
)


AC_CONFIG_FILES([Makefile])
AC_OUTPUT
