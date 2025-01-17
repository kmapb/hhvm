/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/typed-interceptor/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/typed-interceptor/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/typed-interceptor/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/typed-interceptor/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Request>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Request>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

const folly::StringPiece Request::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<Request>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece Request::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<Request>::name;
}


Request::Request(apache::thrift::FragileConstructor, ::std::int32_t i__arg) :
    __fbthrift_field_i(std::move(i__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void Request::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_i = ::std::int32_t();
  __isset = {};
}

void Request::__fbthrift_clear_terse_fields() {
}

bool Request::__fbthrift_is_empty() const {
  return false;
}

bool Request::operator==(FOLLY_MAYBE_UNUSED const Request& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool Request::operator<(FOLLY_MAYBE_UNUSED const Request& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap(FOLLY_MAYBE_UNUSED Request& a, FOLLY_MAYBE_UNUSED Request& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_i, b.__fbthrift_field_i);
  swap(a.__isset, b.__isset);
}

template void Request::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Request::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Request::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Request::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Request::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Request::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Request::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Request::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
