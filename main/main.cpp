#include <iostream>

#include "greeter.h"

void setup() {
  std::cout << greeter::greet("world") << std::endl;
}

void loop() {}

extern "C" {
void app_main(void) {
  setup();
  while (1) {
    loop();
  }
}
}
