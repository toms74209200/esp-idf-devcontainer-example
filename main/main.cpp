void setup() {}

void loop() {}

extern "C" {
void app_main(void) {
  setup();
  while (1) {
    loop();
  }
}
}
