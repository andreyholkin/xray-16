add_library(xrLC_Light SHARED)

target_sources(xrLC_Light PRIVATE
    base_basis.cpp
    base_basis.h
    base_color.cpp
    base_color.h
    base_face.cpp
    base_face.h
    base_face_ptr_storage.h
    base_lighting.cpp
    base_lighting.h
    b_build_texture.cpp
    b_build_texture.h
    calculate_normals.h
    compiler.cpp
    detail_net_global_data.cpp
    detail_net_global_data.h
    detail_slot_calculate.cpp
    detail_slot_calculate.h
    ETextureParams.cpp
    ETextureParams.h
    execute_statistics.cpp
    execute_statistics.h
    file_compress.cpp
    file_compress.h
    fitter.cpp
    fitter.h
    gl_base_cl_data.cpp
    gl_base_cl_data.h
    global_calculation_data.cpp
    global_calculation_data.h
    global_slots_data.cpp
    global_slots_data.h
    hash2D.h
    implicit_net_global_data.cpp
    implicit_net_global_data.h
    itterate_adjacents.h
    itterate_adjacents_static.h
    lcnet_execution_tasks_add.h
    lc_net_global_data.cpp
    lc_net_global_data.h
    lcnet_task_manager.cpp
    lcnet_task_manager.h
    lcnet_task_menager_run_task.cpp
    light_execute.cpp
    light_execute.h
    Lightmap.cpp
    Lightmap.h
    light_point.h
    lightstab_interface.h
    LightThread.cpp
    LightThread.h
    lm_layer.cpp
    lm_layer.h
    lm_net_global_data.cpp
    lm_net_global_data.h
    MeshStaic.cpp
    MeshStructure.h
    mu_light_net.cpp
    mu_light_net.h
    mu_model_face.cpp
    mu_model_face_defs.h
    mu_model_face.h
    mu_model_light.cpp
    mu_model_light.h
    mu_model_light_threads.cpp
    mu_model_light_threads.h
    net_all_executions.h
    net_all_globals.h
    net_cl_data_prepare.cpp
    net_cl_data_prepare.h
    net_exec_pool.cpp
    net_exec_pool.h
    net_execution.cpp
    net_execution_detail_light.cpp
    net_execution_detail_light.h
    net_execution_factory.cpp
    net_execution_factory.h
    net_execution_factory_register.cpp
    net_execution_globals.cpp
    net_execution_globals.h
    net_execution.h
    net_execution_implicit_light.cpp
    net_execution_implicit_light.h
    net_execution_lightmaps.cpp
    net_execution_lightmaps.h
    net_execution_mu_base.cpp
    net_execution_mu_base.h
    net_execution_mu_ref.cpp
    net_execution_mu_ref.h
    net_execution_vertex_light.cpp
    net_execution_vertex_light.h
    net_global_data_cleanup.cpp
    net_global_data_cleanup.h
    net_global_data.cpp
    net_global_data.h
    net_light.cpp
    net_light.h
    net_lightmaps_add_task.cpp
    net_light_task.cpp
    net_light_task.h
    net_stream.cpp
    net_stream.h
    net_task_callback.cpp
    net_task_callback.h
    net_task.cpp
    net_task.h
    net_task_manager.cpp
    net_task_manager.h
    net_task_menager.cpp
    net_task_menager.h
    recalculation.cpp
    recalculation.h
    ref_model_net_global_data.cpp
    ref_model_net_global_data.h
    R_light.h
    serialize.cpp
    serialize.h
    stdafx.cpp
    stdafx.h
    tcf.cpp
    tcf.h
    uv_tri.cpp
    uv_tri.h
    vector_clear.h
    xrDeflectoL_Direct.cpp
    xrDeflector.cpp
    xrDeflectorDefs.h
    xrDeflector.h
    xrDeflectorLight.cpp
    xrDXTC.h
    xrFace.cpp
    xrFaceDefs.h
    xrFace.h
    xrFaceInline.h
    xrImage_Filter.cpp
    xrImage_Filter.h
    xrImage_Resampler.cpp
    xrImage_Resampler.h
    xrIsect.h
    xrLC_GlobalData.cpp
    xrLC_GlobalData.h
    xrLC_Light.cpp
    xrLC_Light.h
    xrLightDoNet.cpp
    xrLightDoNet.h
    xrLight_ImlicitNet.cpp
    xrLight_ImplicitCalcGlobs.cpp
    xrLight_ImplicitCalcGlobs.h
    xrLight_Implicit.cpp
    xrLight_ImplicitDeflector.cpp
    xrLight_ImplicitDeflector.h
    xrLight_Implicit.h
    xrLight_ImplicitRun.h
    xrLight_ImplicitThread.cpp
    xrLightVertex.cpp
    xrLightVertex.h
    xrLightVertexNet.cpp
    xrMU_Model_Calc_faceopacity.cpp
    xrMU_Model_Calc_lighting.cpp
    xrMU_Model_Calc_materials.cpp
    xrMU_Model_Calc_normals.cpp
    xrMU_Model.cpp
    xrMU_Model_export_cform_rcast.cpp
    xrMU_Model.h
    xrMU_Model_Load.cpp
    xrMU_Model_Reference_Calc_Lighting.cpp
    xrMU_Model_Reference.cpp
    xrMU_Model_Reference.h
    xrUVpoint.h
    ../Shader_xrLC.h
    ../xrLoadSurface.cpp
)

target_include_directories(xrLC_Light
    PRIVATE
    "${CMAKE_SOURCE_DIR}/src"
    "${CMAKE_SOURCE_DIR}/sdk/include"
)

target_link_libraries(xrLC_Light
    PRIVATE
    xrCore
    xrCDB
    zlib
    xrLCUtil
)

target_compile_definitions(xrLC_Light
    PRIVATE
    _USRDLL
    LEVEL_COMPILER
    _USE_MATH_DEFINES
    XRLC_LIGHT_EXPORTS
    FORCE_NO_EXCEPTIONS
)

set_target_properties(xrLC_Light PROPERTIES
    PREFIX ""
)

target_precompile_headers(xrLC_Light
    PRIVATE
    stdafx.h
)

install(TARGETS xrLC_Light LIBRARY
    DESTINATION "${CMAKE_INSTALL_LIBDIR}"
)
