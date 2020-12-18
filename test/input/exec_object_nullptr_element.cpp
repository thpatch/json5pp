#include <json5pp.hpp>
#include <ostream>

void exec(std::ostream& out)
{
  auto value = json5pp::object({{"a", nullptr}, {"b", 123ll}, {"c", nullptr}});
  out << value;
}
