set(LIBRARY_SOURCES
    equity1.cpp
)

set(LIBRARY_HEADERS
    equity1.hpp
)

set(LIBRARY_INCLUDES
    "./"
)

add_library(${LIBRARY_EQ} STATIC
    ${LIBRARY_SOURCES}
    ${LIBRARY_HEADERS})

target_include_directories(${LIBRARY_EQ} PUBLIC
    ${LIBRARY_INCLUDES})

target_link_libraries(${LIBRARY_EQ} PUBLIC ${LIBRARY_RANDOM})
