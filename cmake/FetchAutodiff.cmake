include(ExternalProject)

set(CMAKE_INSTALL_PREFIX 
    "${CMAKE_BINARY_DIR}/install"
)

ExternalProject_Add(
  autodiff
  GIT_REPOSITORY https://github.com/hmp-anthony/autodiff
  GIT_TAG main
  CMAKE_ARGS
    -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_INSTALL_PREFIX}
  )

ExternalProject_Get_Property(autodiff install_dir)

include_directories(${install_dir}/src/autodiff)
