cmake_minimum_required(VERSION 3.8)
project(FactoryMethod2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp buttons/IButton.cpp buttons/IButton.h buttons/WebButton.cpp buttons/WebButton.h buttons/TextButton.cpp buttons/TextButton.h windows/Dialog.cpp windows/Dialog.h windows/WebDialog.cpp windows/WebDialog.h windows/TextDialog.cpp windows/TextDialog.h)
add_executable(FactoryMethod2 ${SOURCE_FILES})