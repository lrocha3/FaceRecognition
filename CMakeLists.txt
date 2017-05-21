cmake_minimum_required (VERSION 3.1.0)

project (MyProject)

#Use the standard C11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall")

#Include the Headers
include_directories(inc)

#Include the Sources
set(SOURCES src/main.cpp src/FaceDetector.cpp)

#Set the folder for the binary
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

#Pass a variable to C++ code FACE_XML_CLASSIFIER
set(XML_PATH ${CMAKE_CURRENT_SOURCE_DIR}/res/haarcascade_frontalface_alt.xml)
add_definitions(-DFACE_XML_CLASSIFIER=\"${XML_PATH}\")

#Necessary packages: OpenCV
find_package(OpenCV)
include_directories(${OpenCV_INCLUDE_DIRS})

#Libraries and target
IF(OpenCV_FOUND)
	MESSAGE(STATUS "COMPILING OPENCV TESTS")
	add_executable (MyCameraProgram ${SOURCES})
	target_link_libraries (MyCameraProgram ${OpenCV_LIBS})
	#Use c++ latest standards
	target_compile_features(MyCameraProgram PRIVATE cxx_range_for)
ELSE()
	MESSAGE(FATAL_ERROR "OPENCV NOT FOUND IN YOUR SYSTEM")
ENDIF()
