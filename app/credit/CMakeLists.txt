set(EXE_SOURCES
    main_credit.cpp)

add_executable(${EXECUTABLE_CREDIT} ${EXE_SOURCES})
target_link_libraries(${EXECUTABLE_CREDIT} PUBLIC ${LIBRARY_CREDIT})
