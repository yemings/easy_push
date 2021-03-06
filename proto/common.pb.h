// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/common.proto

#ifndef PROTOBUF_proto_2fcommon_2eproto__INCLUDED
#define PROTOBUF_proto_2fcommon_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace common {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_proto_2fcommon_2eproto();
void protobuf_AssignDesc_proto_2fcommon_2eproto();
void protobuf_ShutdownFile_proto_2fcommon_2eproto();

class common_head;

// ===================================================================

class common_head : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:common.common_head) */ {
 public:
  common_head();
  virtual ~common_head();

  common_head(const common_head& from);

  inline common_head& operator=(const common_head& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const common_head& default_instance();

  void Swap(common_head* other);

  // implements Message ----------------------------------------------

  inline common_head* New() const { return New(NULL); }

  common_head* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const common_head& from);
  void MergeFrom(const common_head& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(common_head* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 msg_id = 1;
  bool has_msg_id() const;
  void clear_msg_id();
  static const int kMsgIdFieldNumber = 1;
  ::google::protobuf::int32 msg_id() const;
  void set_msg_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:common.common_head)
 private:
  inline void set_has_msg_id();
  inline void clear_has_msg_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 msg_id_;
  friend void  protobuf_AddDesc_proto_2fcommon_2eproto();
  friend void protobuf_AssignDesc_proto_2fcommon_2eproto();
  friend void protobuf_ShutdownFile_proto_2fcommon_2eproto();

  void InitAsDefaultInstance();
  static common_head* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// common_head

// required int32 msg_id = 1;
inline bool common_head::has_msg_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void common_head::set_has_msg_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void common_head::clear_has_msg_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void common_head::clear_msg_id() {
  msg_id_ = 0;
  clear_has_msg_id();
}
inline ::google::protobuf::int32 common_head::msg_id() const {
  // @@protoc_insertion_point(field_get:common.common_head.msg_id)
  return msg_id_;
}
inline void common_head::set_msg_id(::google::protobuf::int32 value) {
  set_has_msg_id();
  msg_id_ = value;
  // @@protoc_insertion_point(field_set:common.common_head.msg_id)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace common

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_2fcommon_2eproto__INCLUDED
