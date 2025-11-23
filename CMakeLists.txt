cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    geode
    GIT_REPOSITORY https://github.com/geode-sdk/geode
    GIT_TAG v3.0.0-beta.1
)
FetchContent_MakeAvailable(geode)

# Burası mod.json'daki ID ile AYNI olmalı
setup_geode_mod(
    id: "emirontop1.ilk-mod-menu"
)
