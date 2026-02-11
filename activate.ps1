Set-Location $PSScriptRoot

#refresh the build directory
Remove-Item build -Recurse -Force
mkdir build
Set-Location build

#configure cmake with ninja and clang (my setup)

cmake -G Ninja `
    -D CMAKE_C_COMPILER=clang `
    -D CMAKE_CXX_COMPILER=clang++ `
    -D CMAKE_BUILD_TYPE=Release `
    -D CMAKE_EXPORT_COMPILE_COMMANDS=ON `
``
ninja

Set-Location ..