typedef struct Modulator {
  int test;
  void (*add)(struct Modulator *self);
  int (*state)(struct Modulator *self);
} Modulator_t;

Modulator_t *New();
