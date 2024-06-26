cmake_minimum_required(VERSION 3.11)
project(CrappyBird)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(tikira-engine)


file(GLOB PROJECT_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/tikira-engine/include)

target_link_libraries(${PROJECT_NAME} PRIVATE TiKiRa)