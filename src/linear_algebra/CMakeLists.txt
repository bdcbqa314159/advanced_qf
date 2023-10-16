set(LIBRARY_SOURCES
    matrix.cpp
)

set(LIBRARY_HEADERS
    matrix.hpp
)

set(LIBRARY_INCLUDES
    "./"
)

add_library(${LIBRARY_LINEAR_ALGEBRA} STATIC
    ${LIBRARY_HEADERS} ${LIBRARY_SOURCES})

target_include_directories(${LIBRARY_LINEAR_ALGEBRA} PUBLIC
    ${LIBRARY_INCLUDES})
