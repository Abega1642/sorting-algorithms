cmake_minimum_required(VERSION 3.28)
project(sortAlgorithms C)

set(CMAKE_C_STANDARD 11)

add_executable(sortAlgorithms
        src/substitutionSort.c
        src/insertionSort.c
        src/bubbleSort.c
        src/selectionSort.c
)
