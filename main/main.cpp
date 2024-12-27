#include <iostream>
#include "freertos/FreeRTOS.h"

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
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}
}
