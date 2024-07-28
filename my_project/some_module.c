#include "some_module.h"
#include <stdlib.h>

typedef struct modulator {
  int test;
  void (*add)(struct modulator *self);
  int (*state)(struct modulator *self);
} modulator_t;

void add(modulator_t *self) { self->test = self->test + 2; }
int state(modulator_t *self) { return self->test; }

Modulator_t *New() {
  modulator_t *modulator = (modulator_t *)malloc(sizeof(modulator_t));
  modulator->test = 0;
  modulator->add = add;
  modulator->state = state;
  return (Modulator_t *)modulator;
}
