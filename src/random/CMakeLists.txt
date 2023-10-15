set(LIBRARY_SOURCES
    random.cpp
)

set(LIBRARY_HEADERS
    random.hpp
)

set(LIBRARY_INCLUDES
    "./"
)

add_library(${LIBRARY_RANDOM} STATIC
    ${LIBRARY_SOURCES}
    ${LIBRARY_HEADERS})

target_include_directories(${LIBRARY_RANDOM} PUBLIC
    ${LIBRARY_INCLUDES})
