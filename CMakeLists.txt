cmake_minimum_required(VERSION 3.16)
project(test)

set(CMAKE_CXX_STANDARD 11)

#add_executable(__STL_STATIC_TEMPLATE_MEMBER_BUG configuration/__STL_STATIC_TEMPLATE_MEMBER_BUG.cpp)
add_executable(__STL_CLASS_PARTIAL_SPECIALIZATION configuration/__STL_CLASS_PARTIAL_SPECIALIZATION.cpp)
add_executable(__STL_FUNCTION_TMPL_PARTIAL_ORDER configuration/__STL_FUNCTION_TMPL_PARTIAL_ORDER.cpp)
add_executable(__STL_MEMBER_TEMPLATES configuration/__STL_MEMBER_TEMPLATES.cpp)
add_executable(__STL_LIMITED_DEFAULT_TEMPLATES configuration/__STL_LIMITED_DEFAULT_TEMPLATES.cpp)
add_executable(__STL_NON_TYPE_TMPL_PARAM_BUG configuration/__STL_NON_TYPE_TMPL_PARAM_BUG.cpp)
add_executable(__STL_NULL_TMPL_ARGS configuration/__STL_NULL_TMPL_ARGS.cpp)
add_executable(__STL_TEMPLATE_NULL configuration/__STL_TEMPLATE_NULL.cpp)
add_executable(Foreach configuration/Foreach.cpp)
add_executable(config-inclass-init configuration/config-inclass-init.cpp)
add_executable(config-operator-overloading configuration/config-operator-overloading.cpp)
add_executable(function_call configuration/function_call.cpp)
add_executable(jjalloc allocator/jjalloc.cpp)
