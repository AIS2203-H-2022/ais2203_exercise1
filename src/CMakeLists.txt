
add_library(personlib exercise/person.cpp exercise/greet.cpp)
target_include_directories(personlib PUBLIC ${CMAKE_SOURCE_DIR}/include)
