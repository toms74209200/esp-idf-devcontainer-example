#pragma once

#include <string>

namespace greeter {
std::string greet(const std::string& name) noexcept {
  return "Hello, " + name + "!";
}
}  // namespace greeter
