cmake_minimum_required(VERSION 3.10.2)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(School CXX)

include_directories(include)

file(GLOB_RECURSE HEADERS "./include/*.h")
#file(GLOB_RECURSE SOURCES "./src/*.cpp")
file(GLOB_RECURSE SRCLIST "./src/*.cpp")
set(SRC_FILES ${SRCLIST})

add_library(${PROJECT_NAME} STATIC ${HEADERS} ${SRC_FILES}) # check if headers are supposed to go here

#source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${HEADERS})    test this
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SRC_FILES})

set_target_properties(${PROJECT_NAME}
                      PROPERTIES POSITION_INDEPENDENT_CODE ON)

target_link_libraries(${PROJECT_NAME})

set(${PROJECT_NAME}_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/include
    CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)
