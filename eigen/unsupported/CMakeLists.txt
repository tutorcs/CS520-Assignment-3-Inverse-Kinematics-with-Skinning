https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
add_subdirectory(Eigen)
add_subdirectory(doc EXCLUDE_FROM_ALL)
if(BUILD_TESTING)
  if(EIGEN_LEAVE_TEST_IN_ALL_TARGET)
    add_subdirectory(test) # can't do EXCLUDE_FROM_ALL here, breaks CTest
  else()
    add_subdirectory(test EXCLUDE_FROM_ALL)
  endif()
endif()
