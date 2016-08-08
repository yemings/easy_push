// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/common.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "proto/common.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace common {

namespace {

const ::google::protobuf::Descriptor* common_head_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  common_head_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_proto_2fcommon_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_proto_2fcommon_2eproto() {
  protobuf_AddDesc_proto_2fcommon_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "proto/common.proto");
  GOOGLE_CHECK(file != NULL);
  common_head_descriptor_ = file->message_type(0);
  static const int common_head_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(common_head, msg_id_),
  };
  common_head_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      common_head_descriptor_,
      common_head::default_instance_,
      common_head_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(common_head, _has_bits_[0]),
      -1,
      -1,
      sizeof(common_head),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(common_head, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_proto_2fcommon_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      common_head_descriptor_, &common_head::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_proto_2fcommon_2eproto() {
  delete common_head::default_instance_;
  delete common_head_reflection_;
}

void protobuf_AddDesc_proto_2fcommon_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_proto_2fcommon_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022proto/common.proto\022\006common\"\035\n\013common_h"
    "ead\022\016\n\006msg_id\030\001 \002(\005", 59);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/common.proto", &protobuf_RegisterTypes);
  common_head::default_instance_ = new common_head();
  common_head::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_proto_2fcommon_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_proto_2fcommon_2eproto {
  StaticDescriptorInitializer_proto_2fcommon_2eproto() {
    protobuf_AddDesc_proto_2fcommon_2eproto();
  }
} static_descriptor_initializer_proto_2fcommon_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int common_head::kMsgIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

common_head::common_head()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:common.common_head)
}

void common_head::InitAsDefaultInstance() {
}

common_head::common_head(const common_head& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:common.common_head)
}

void common_head::SharedCtor() {
  _cached_size_ = 0;
  msg_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

common_head::~common_head() {
  // @@protoc_insertion_point(destructor:common.common_head)
  SharedDtor();
}

void common_head::SharedDtor() {
  if (this != default_instance_) {
  }
}

void common_head::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* common_head::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return common_head_descriptor_;
}

const common_head& common_head::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_2fcommon_2eproto();
  return *default_instance_;
}

common_head* common_head::default_instance_ = NULL;

common_head* common_head::New(::google::protobuf::Arena* arena) const {
  common_head* n = new common_head;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void common_head::Clear() {
// @@protoc_insertion_point(message_clear_start:common.common_head)
  msg_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool common_head::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:common.common_head)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 msg_id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &msg_id_)));
          set_has_msg_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:common.common_head)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:common.common_head)
  return false;
#undef DO_
}

void common_head::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:common.common_head)
  // required int32 msg_id = 1;
  if (has_msg_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->msg_id(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:common.common_head)
}

::google::protobuf::uint8* common_head::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:common.common_head)
  // required int32 msg_id = 1;
  if (has_msg_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->msg_id(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:common.common_head)
  return target;
}

int common_head::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:common.common_head)
  int total_size = 0;

  // required int32 msg_id = 1;
  if (has_msg_id()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->msg_id());
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void common_head::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:common.common_head)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const common_head* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const common_head>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:common.common_head)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:common.common_head)
    MergeFrom(*source);
  }
}

void common_head::MergeFrom(const common_head& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:common.common_head)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msg_id()) {
      set_msg_id(from.msg_id());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void common_head::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:common.common_head)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void common_head::CopyFrom(const common_head& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:common.common_head)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool common_head::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void common_head::Swap(common_head* other) {
  if (other == this) return;
  InternalSwap(other);
}
void common_head::InternalSwap(common_head* other) {
  std::swap(msg_id_, other->msg_id_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata common_head::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = common_head_descriptor_;
  metadata.reflection = common_head_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// common_head

// required int32 msg_id = 1;
bool common_head::has_msg_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void common_head::set_has_msg_id() {
  _has_bits_[0] |= 0x00000001u;
}
void common_head::clear_has_msg_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void common_head::clear_msg_id() {
  msg_id_ = 0;
  clear_has_msg_id();
}
 ::google::protobuf::int32 common_head::msg_id() const {
  // @@protoc_insertion_point(field_get:common.common_head.msg_id)
  return msg_id_;
}
 void common_head::set_msg_id(::google::protobuf::int32 value) {
  set_has_msg_id();
  msg_id_ = value;
  // @@protoc_insertion_point(field_set:common.common_head.msg_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace common

// @@protoc_insertion_point(global_scope)
