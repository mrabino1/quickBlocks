# minimum cmake version supported
cmake_minimum_required (VERSION 2.6)

# folder project
project (apps)

# Path to library include files
include_directories(${BASE_INCLUDE})

# messaging
# message (WARNING  "*** Entering apps folder ***")

# Compilation order of the src subdirectories
add_subdirectory(acctExport)
add_subdirectory(ethprice)
add_subdirectory(cacheMan)

add_subdirectory(blockScrape)
add_subdirectory(acctScrape)
#add_subdirectory(acctExport)
add_subdirectory(chifra)
add_subdirectory(miniBlocks)

add_subdirectory(blockMan)
add_subdirectory(bloomMan)
