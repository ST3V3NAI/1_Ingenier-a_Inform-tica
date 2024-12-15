# Version mínima de CMake
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto y versión
project(MiProyecto VERSION 1.0)

# Configuración de estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Añadir el ejecutable
# Cambia main_main.cc por el nombre de tunu archivo fuente principal
add_executable(tupu main_main.cc main.cc)

# Incluir el directorio actual para que CMake pueda encontrar el archivo de encabezado "main.h"
target_include_directories(tupu PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Si tienes otros archivos fuente, agrégales aquí, por ejemplo:
# add_executable(tupu main.h main_main.h)

# Añadir directorios de inclusión
# include_directories(${PROJECT_SOURCE_DIR}/include)

# Linkear bibliotecas externas, si las tienes
# target_link_libraries(MiEjecutable mi_biblioteca)

# Opciones adicionales de compilación, si es necesario
# target_compile_options(MiEjecutable PRIVATE -Wall -Wextra -O2)
