cmake_minimum_required(VERSION 3.22)
project(CPP05)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00
        ex00/main.cpp
        ex00/Bureaucrat.cpp
        ex00/Bureaucrat.hpp)

add_executable(ex01
        ex01/main.cpp
        ex01/Form.cpp
        ex01/Form.hpp
        ex01/Bureaucrat.cpp
        ex01/Bureaucrat.hpp)

add_executable(ex02
        ex02/main.cpp
        ex02/Form.cpp
        ex02/Form.hpp
        ex02/Bureaucrat.cpp
        ex02/Bureaucrat.hpp
        ex02/ShrubberyCreationForm.cpp
        ex02/ShrubberyCreationForm.h
        ex02/PresidentialPardonForm.cpp
        ex02/PresidentialPardonForm.h
        ex02/RobotomyRequestForm.cpp
        ex02/RobotomyRequestForm.h)

add_executable(ex03
        ex03/main.cpp
        ex03/Form.cpp
        ex03/Form.hpp
        ex03/Bureaucrat.cpp
        ex03/Bureaucrat.hpp
        ex03/ShrubberyCreationForm.cpp
        ex03/ShrubberyCreationForm.h
        ex03/PresidentialPardonForm.cpp
        ex03/PresidentialPardonForm.h
        ex03/RobotomyRequestForm.cpp
        ex03/RobotomyRequestForm.h
        ex03/Intern.cpp
        ex03/Intern.h)