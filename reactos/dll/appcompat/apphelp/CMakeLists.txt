
include_directories(${SHIMLIB_DIR})

remove_definitions(-D_WIN32_WINNT=0x502 -DWINVER=0x502)
add_definitions(-D_WIN32_WINNT=0x601 -DWINVER=0x601)
#add_definitions(-DSDBAPI_DEBUG_ALLOC)

spec2def(apphelp.dll apphelp.spec ADD_IMPORTLIB)

list(APPEND SOURCE
    apphelp.c
    dbgheap.c
    hsdb.c
    layer.c
    sdbapi.c
    sdbfileattr.c
    sdbread.c
    sdbstringtable.c
    sdbwrite.c
    shimeng.c
    apphelp.spec
    apphelp.h
    ${CMAKE_CURRENT_BINARY_DIR}/apphelp_stubs.c)

add_library(apphelp SHARED
    ${SOURCE}
    apphelp.rc
    ${CMAKE_CURRENT_BINARY_DIR}/apphelp.def)

set_module_type(apphelp win32dll UNICODE ENTRYPOINT DllMain 12)
add_delay_importlibs(apphelp version)
add_importlibs(apphelp kernel32 ntdll)
add_cd_file(TARGET apphelp DESTINATION reactos/system32 FOR all)
