# cpp_learning

To find additional headers:
g++ -o main -I/source/includes main.cpp

To maximize the chance that missing includes will be flagged by compiler, order your #includes as follows:
    - The paired header file
    - Other headers from your project
    - 3rd party library headers
    - Standard library headers