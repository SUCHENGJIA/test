cmake_minimum_required(VERSION 3.23)
project(addressBookManagementSystem)

set(CMAKE_CXX_STANDARD 14)

add_executable(addressBookManagementSystem addressBookManagementSystem.cpp addressBook.h showMenu.cpp addPerson.cpp showPerson.cpp deletePerson.cpp findPerson.cpp modifyPerson.cpp clearPerson.cpp)
