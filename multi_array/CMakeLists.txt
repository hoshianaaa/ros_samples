cmake_minimum_required(VERSION 3.0.2)
project(multi_array)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)
catkin_package(
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(pub src/pub.cpp)
target_link_libraries(pub
  ${catkin_LIBRARIES}
)

add_executable(sub src/sub.cpp)
target_link_libraries(sub
  ${catkin_LIBRARIES}
)
