function(primer_add_example target_name)
    add_executable(${target_name} ${ARGN})

    if(COMMAND primer_enable_warnings)
        primer_enable_warnings(${target_name})
    endif()

endfunction()

