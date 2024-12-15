# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author
# @date
# @brief Simplified CMakeLists.txt example for a single executable project.

# Requerir una versión mínima de CMake
cmake_minimum_required(VERSION 3.10)

# Configuración del proyecto
project(capitalize_vowels               # Nombre del proyecto
    VERSION 1.0
    DESCRIPTION "A simple CMake project for the Capitalize vowels application"
    LANGUAGES CXX)

# Configurar el estándar de C++
set(CMAKE_CXX_STANDARD 17)                # Usar C++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Configurar la salida de los ejecutables
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# Configurar flags de depuración y release
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# Incluir el directorio donde están los headers
include_directories(${PROJECT_SOURCE_DIR}/src)

# Crear un ejecutable llamado "capitalize_vowels"
add_executable(capitalize_vowels
    src/capitalize_vowels_main.cc  # Archivo principal (main)
    src/capitalize_vowels.h    # Encabezado del módulo
    src/capitalize_vowels.cc   # Implementación del módulo
)

# Opcional: Añadir opciones de compilación específicas al ejecutable
target_compile_options(capitalize_vowels PRIVATE -Wall -Wextra -Wpedantic -Weffc++)
