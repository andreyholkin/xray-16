if (WIN32)
    add_subdirectory(xrLC_Light)
endif()

add_subdirectory(xrLCUtil)

if (NOT PROJECT_PLATFORM_E2K) # XXX: fix compilation on E2K
    add_subdirectory(xrQSlim)
endif()

add_subdirectory(xrMiscMath)
