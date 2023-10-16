set(LIBRARY_SOURCES
    ir1.cpp
)

set(LIBRARY_HEADERS
    ir1.hpp
)

set(LIBRARY_INCLUDES
    "./"
)

add_library(${LIBRARY_IR} STATIC
    ${LIBRARY_SOURCES}
    ${LIBRARY_HEADERS})

target_include_directories(${LIBRARY_IR} PUBLIC
    ${LIBRARY_INCLUDES})

target_link_libraries(${LIBRARY_IR} PUBLIC
                        ${LIBRARY_LINEAR_ALGEBRA}
                        ${LIBRARY_RANDOM})
