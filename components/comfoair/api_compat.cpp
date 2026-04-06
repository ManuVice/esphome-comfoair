#include "esphome/components/api/user_services.h"

namespace esphome {
namespace api {

// ===== NUR int ergänzen =====

// get_execute_arg_value<int>
template<>
int get_execute_arg_value<int>(const ExecuteServiceArgument &arg) {
  return arg.int_;
}

// to_service_arg_type<int>
template<>
enums::ServiceArgType to_service_arg_type<int>() {
  return enums::SERVICE_ARG_TYPE_INT;
}

}  // namespace api
}  // namespace esphome
