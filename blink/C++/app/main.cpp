// Inspired by: http://arduino.cc/en/Tutorial/Blink

#include <modm/board.hpp>

int main() {
  Board::initialize();
  LedD13::setOutput();

  while (true) {
    LedD13::set();
    modm::delay(1s);
    LedD13::reset();
    modm::delay(1s);
  }
}
