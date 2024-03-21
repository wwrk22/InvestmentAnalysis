cmake_minimum_required(VERSION 3.28.3)

project(InvestmentAnalysis
	VERSION 0.1.0
	DESCRIPTION "An opinionated investment analysis tool."
	LANGUAGES CXX C)

# Set build type to debug by default in development.
set(DEFAULT_BUILD_TYPE "Release")

if (EXISTS "${CMAKE_SOURCE_DIR}/.git")
	set(DEFAULT_BUILD_TYPE "Debug")
endif()

add_executable(${PROJECT_NAME}
	./src/main.cpp
	./src/company/company.cpp
	./src/company/consumer_defensive.cpp
	./src/metric/revenue.cpp)

set(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17)

target_compile_options(${PROJECT_NAME} PRIVATE
	-Wall
	-Werror
	-Wextra
	-Wpedantic)

target_include_directories(${PROJECT_NAME} PRIVATE
	./include
	./src)
