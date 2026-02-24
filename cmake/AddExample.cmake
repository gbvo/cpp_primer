function(primer_add_example target_name)
    add_executable(${target_name} ${ARGN})

    # 统一 warnings（如果你写了 CompilerWarnings.cmake）
    if(COMMAND primer_enable_warnings)
        primer_enable_warnings(${target_name})
    endif()
endfunction()
