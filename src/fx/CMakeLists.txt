set(LIBRARY_SOURCES
    fx1.cpp
    fx_print.cpp
)

set(LIBRARY_HEADERS
    fx1.hpp
    fx_print.hpp
)

set(LIBRARY_INCLUDES
    "./"
)

add_library(${LIBRARY_FX} STATIC
    ${LIBRARY_SOURCES}
    ${LIBRARY_HEADERS})

target_include_directories(${LIBRARY_FX} PUBLIC
    ${LIBRARY_INCLUDES})

target_link_libraries(${LIBRARY_FX} PUBLIC ${LIBRARY_LINEAR_ALGEBRA})
