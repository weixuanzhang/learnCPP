add_library(
	C++Basics STATIC
	src/initialization.cpp
)
add_executable(initialization src/initialization.cpp)
add_executable(first_program src/first_program.cpp)
add_executable(function src/function.cpp)
add_executable(forward_declaration src/forward_declaration.cpp)
add_executable(multiple_files src/multiple_files.cpp src/add.cpp)
add_executable(macros src/macros.cpp)
add_executable(logger src/logger.cpp)
add_executable(dataType src/dataTypes.cpp)
add_executable(literal src/literal.cpp)
add_executable(numeral src/numeral_systems.cpp)

# target_compile_options(dataType PRIVATE -Wall -Wextra -Wpedantic -Werror)
target_link_libraries(logger LINK_PUBLIC plog)

target_include_directories(C++Basics PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src") 
