set(EXE_SOURCES
    main_fx.cpp)

add_executable(${EXECUTABLE_FX} ${EXE_SOURCES})
target_link_libraries(${EXECUTABLE_FX} PUBLIC ${LIBRARY_FX})
