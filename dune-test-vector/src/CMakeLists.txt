add_executable("dune-test-vector" dune-test-vector.cc)
target_link_dune_default_libraries("dune-test-vector")

#add_executable("plot" plot.cc)

find_package(Matplot++ REQUIRED)

add_executable("plot2" plot2.cc)
target_link_libraries("plot2" PUBLIC Matplot++::matplot)
