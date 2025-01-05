cmake_minimum_required(VERSION 3.28)
project(untitled2 C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled2
        sortAlgos/substitutionSort.c
        sortAlgos/insertionSort.c
        sortAlgos/bubbleSort.c
        sortAlgos/selectionSort.c
)
