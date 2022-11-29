cmake_minimum_required(VERSION 3.23)
project(ICP_IndividualProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(ICP_IndividualProject main.cpp Airline.cpp Airline.h Airport.cpp Airport.h Route.cpp Route.h FileReader.cpp FileReader.h CreatingObjects.cpp CreatingObjects.h Problem.cpp Problem.h Node.cpp Node.h GetObject.cpp GetObject.h Haversine.cpp Haversine.h Search.cpp Search.h)
