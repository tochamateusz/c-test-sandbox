#include <sys/types.h>
#include <vector>

#define SOME_IMPLEMENATAION
extern "C" {
#include "some_module.h"
}
#include <gtest/gtest.h>

TEST(Modulator, InitModulator) {
  Modulator_t *ptrActual = New();

  some_func();

  std::vector<u_int8_t> ints = std::vector<u_int8_t>{1, 2, 3};

  ints.emplace_back(4);
  ints.push_back(5);

  EXPECT_EQ(ptrActual->state(ptrActual), 0);
}

TEST(Modulator, AddModulator) {
  Modulator_t *ptrActual = New();

  ptrActual->add(ptrActual);
  ptrActual->add(ptrActual);

  EXPECT_EQ(ptrActual->state(ptrActual), 4);
}
