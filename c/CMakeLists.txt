cmake_minimum_required(VERSION 3.10)
project(program C)

set(CMAKE_C_STANDARD 99)

# program's executable
set(BIN program)

add_executable(${BIN}
  # Add program's sources here:
  program/main.c
  program/foo.c
  program/component/component.c
)

target_include_directories(${BIN}
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
)

# program's integration tests
set(TEST_BIN test_${BIN})

add_executable(${TEST_BIN}
  # Add program's test sources here:
  tests/main.c
)

target_include_directories(${TEST_BIN}
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
)

# component's integration tests
set(TEST_COMPONENT test_component)

add_executable(${TEST_COMPONENT}
  # Add component's test sources here:
  tests/component/component.c
)

target_include_directories(${TEST_COMPONENT}
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
)

# foo's unit tests
set(TEST_FOO test_foo)

add_executable(${TEST_FOO}
  # Add foo sources here:
  program/foo.test.c
  program/foo.c
)

target_include_directories(${TEST_FOO}
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
)

# Run tests

add_custom_target(test
  COMMAND ${TEST_FOO}
  COMMAND ${TEST_COMPONENT}
  COMMAND ${TEST_BIN}
)
