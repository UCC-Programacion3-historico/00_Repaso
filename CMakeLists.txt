cmake_minimum_required(VERSION 3.2)
project(00_REPASO)

set(CMAKE_CXX_STANDARD 11)

# Agrego todos los test.
add_subdirectory(test)

set(SOURCE_FILES_01 01_POO/main.cpp 01_POO/Geometria.cpp 01_POO/Cuadrado.cpp 01_POO/Triangulo.cpp 01_POO/Circulo.cpp 01_POO/Color.cpp)
add_executable(01_POO ${SOURCE_FILES_01})

set(SOURCE_FILES_02 02_Templates/main.cpp 02_Templates/Calculadora.cpp)
add_executable(02_Templates ${SOURCE_FILES_02})

set(SOURCE_FILES_03 03_Excepciones/main.cpp 03_Excepciones/Calculadora.cpp)
add_executable(03_Excepciones ${SOURCE_FILES_03})

set(SOURCE_FILES_04 04_CalcSegundos/main.cpp)
add_executable(04_CalcSegundos ${SOURCE_FILES_04})

set(SOURCE_FILES_05 05_OperatorsOverload/main.cpp 05_OperatorsOverload/Entero.cpp)
add_executable(05_OperatorsOverload ${SOURCE_FILES_05})

set(SOURCE_FILES_06 06_Tiempo/main.cpp)
add_executable(06_Tiempo  ${SOURCE_FILES_06})
