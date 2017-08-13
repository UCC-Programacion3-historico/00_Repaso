project(test_00_REPASO)

add_subdirectory(01_POO)
add_subdirectory(02_Templates)
add_subdirectory(03_Excepciones)
add_subdirectory(04_CalcSegundos)
add_subdirectory(05_OperatorsOverload)
add_subdirectory(06_Tiempo)
add_subdirectory(lib/gtest-1.8.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(run_test
        ${01_POO_SOURCE_FILES}
        ${02_Templates_SOURCE_FILES}
        ${03_Excepciones_SOURCE_FILES}
        ${04_CalcSegundos_SOURCE_FILES}
        ${05_OperatorsOverload_SOURCE_FILES}
        ${06_Tiempo_SOURCE_FILES}
        )
target_link_libraries(run_test gtest gtest_main gcov)