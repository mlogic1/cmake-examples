cmake_minimum_required(VERSION 3.10.2)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(School CXX)

# todo replace include_directories with target_include_directories
include_directories(include)

file(GLOB_RECURSE FILE_HEADERS "./include/*.h")
file(GLOB_RECURSE FILE_SOURCES "./src/*.cpp")

set(SRC_FILES ${FILE_SOURCES})
set(HEADER_FILES ${FILE_HEADERS})

add_library(${PROJECT_NAME} STATIC ${HEADER_FILES} ${SRC_FILES}) # check if headers are supposed to go here

source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${HEADER_FILES})    #test this
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${SRC_FILES})

set_target_properties(${PROJECT_NAME}
                      PROPERTIES POSITION_INDEPENDENT_CODE ON)


target_link_libraries(${PROJECT_NAME})

# target_include_directories might remove the need for this
set(${PROJECT_NAME}_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/include
    CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)
