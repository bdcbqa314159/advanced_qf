set(EXE_SOURCES
    main_equity.cpp)

add_executable(${EXECUTABLE_EQ} ${EXE_SOURCES})
target_link_libraries(${EXECUTABLE_EQ} PUBLIC ${LIBRARY_EQ})
