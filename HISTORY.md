## 1.0.7 (2012-04-05)

* require CMake 2.8.6 since we are using `set_property` option `APPEND_STRING`.

## 1.0.7 (2012-04-02)

* add support for Ninja generator introduced in CMake 2.8.8.
* fix bug with initialization of variable `COTIRE_VERBOSE`.

## 1.0.6 (2012-04-01)

* correctly handle builds where both `CMAKE_BUILD_TYPE` and `CMAKE_CONFIGURATION_TYPES` are set.

## 1.0.5 (2012-03-26)

* fix Visual Studio C++ 2010 compilation of example project.
* enhance heuristic for #include_next directive detection.
* fix llvm-3.0.src.patch for GCC 4.6 compilation.

## 1.0.4 (2012-03-24)

* honor target property INCLUDE_DIRECTORIES introduced in CMake 2.8.8.

## 1.0.3 (2012-03-23)

* handle OBJECT_LIBRARY targets introduced in CMake 2.8.8.
* use predefined compiler version variable, if available.

## 1.0.2 (2012-03-16)

* fix Xcode 4.3 compatibility.
* Cotire manual corrections.

## 1.0.1 (2012-03-15)

* Cotire manual corrections.
* Add prefix header to the generated unity build target.

## 1.0.0 (2012-03-11)

* First release.
