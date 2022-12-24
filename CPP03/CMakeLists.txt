cmake_minimum_required(VERSION 3.22)
project(CPP03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00
        ex00/main.cpp
        ex00/ClapTrap.cpp
        ex00/ClapTrap.hpp)

add_executable(ex01
        ex01/main.cpp
        ex01/ClapTrap.cpp
        ex01/ClapTrap.hpp
        ex01/ScavTrap.cpp
        ex01/ScavTrap.hpp)

add_executable(ex02
        ex02/main.cpp
        ex02/ClapTrap.cpp
        ex02/ClapTrap.hpp
        ex02/ScavTrap.cpp
        ex02/ScavTrap.hpp
        ex02/FragTrap.cpp
        ex02/FragTrap.hpp)

add_executable(ex03
        ex03/main.cpp
        ex03/ClapTrap.cpp
        ex03/ClapTrap.hpp
        ex03/ScavTrap.cpp
        ex03/ScavTrap.hpp
        ex03/FragTrap.cpp
        ex03/FragTrap.hpp
        ex03/DiamondTrap.cpp
        ex03/DiamondTrap.hpp)
