extern "C" {
#include "some_module.h"
}
#include <gtest/gtest.h>

TEST(Modulator, InitModulator) {
  Modulator_t *ptrActual = New();

  EXPECT_EQ(ptrActual->state(ptrActual), 0);
}

TEST(Modulator, AddModulator) {
  Modulator_t *ptrActual = New();

  ptrActual->add(ptrActual);
  ptrActual->add(ptrActual);

  EXPECT_EQ(ptrActual->state(ptrActual), 4);
}
