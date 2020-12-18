#include <json5pp.hpp>
#include <ostream>

void exec(std::ostream& out)
{
  auto value = json5pp::array({1ll, 2ll});
  out << json5pp::rule::tab_indent<3>() << value;
}
