// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "hardware/ril/mock-ril/src/proto/msgheader.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace communication {

namespace {

const ::google::protobuf::Descriptor* MsgHeader_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgHeader_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_msgheader_2eproto() {
  protobuf_AddDesc_msgheader_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "msgheader.proto");
  GOOGLE_CHECK(file != NULL);
  MsgHeader_descriptor_ = file->message_type(0);
  static const int MsgHeader_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgHeader, cmd_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgHeader, length_data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgHeader, status_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgHeader, token_),
  };
  MsgHeader_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgHeader_descriptor_,
      MsgHeader::default_instance_,
      MsgHeader_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgHeader, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgHeader, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgHeader));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_msgheader_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgHeader_descriptor_, &MsgHeader::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_msgheader_2eproto() {
  delete MsgHeader::default_instance_;
  delete MsgHeader_reflection_;
}

void protobuf_AddDesc_msgheader_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017msgheader.proto\022\rcommunication\"L\n\tMsgH"
    "eader\022\013\n\003cmd\030\001 \002(\r\022\023\n\013length_data\030\002 \002(\r\022"
    "\016\n\006status\030\003 \001(\r\022\r\n\005token\030\004 \001(\004B$\n\"com.an"
    "droid.internal.communication", 148);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msgheader.proto", &protobuf_RegisterTypes);
  MsgHeader::default_instance_ = new MsgHeader();
  MsgHeader::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msgheader_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msgheader_2eproto {
  StaticDescriptorInitializer_msgheader_2eproto() {
    protobuf_AddDesc_msgheader_2eproto();
  }
} static_descriptor_initializer_msgheader_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int MsgHeader::kCmdFieldNumber;
const int MsgHeader::kLengthDataFieldNumber;
const int MsgHeader::kStatusFieldNumber;
const int MsgHeader::kTokenFieldNumber;
#endif  // !_MSC_VER

MsgHeader::MsgHeader()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MsgHeader::InitAsDefaultInstance() {
}

MsgHeader::MsgHeader(const MsgHeader& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MsgHeader::SharedCtor() {
  _cached_size_ = 0;
  cmd_ = 0u;
  length_data_ = 0u;
  status_ = 0u;
  token_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgHeader::~MsgHeader() {
  SharedDtor();
}

void MsgHeader::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MsgHeader::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MsgHeader::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgHeader_descriptor_;
}

const MsgHeader& MsgHeader::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msgheader_2eproto();  return *default_instance_;
}

MsgHeader* MsgHeader::default_instance_ = NULL;

MsgHeader* MsgHeader::New() const {
  return new MsgHeader;
}

void MsgHeader::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    cmd_ = 0u;
    length_data_ = 0u;
    status_ = 0u;
    token_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgHeader::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 cmd = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cmd_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_length_data;
        break;
      }
      
      // required uint32 length_data = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_length_data:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &length_data_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_status;
        break;
      }
      
      // optional uint32 status = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_status:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &status_)));
          _set_bit(2);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_token;
        break;
      }
      
      // optional uint64 token = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_token:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &token_)));
          _set_bit(3);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MsgHeader::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 cmd = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->cmd(), output);
  }
  
  // required uint32 length_data = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->length_data(), output);
  }
  
  // optional uint32 status = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->status(), output);
  }
  
  // optional uint64 token = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->token(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgHeader::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 cmd = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->cmd(), target);
  }
  
  // required uint32 length_data = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->length_data(), target);
  }
  
  // optional uint32 status = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->status(), target);
  }
  
  // optional uint64 token = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->token(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgHeader::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 cmd = 1;
    if (has_cmd()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cmd());
    }
    
    // required uint32 length_data = 2;
    if (has_length_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->length_data());
    }
    
    // optional uint32 status = 3;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->status());
    }
    
    // optional uint64 token = 4;
    if (has_token()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->token());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgHeader::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgHeader* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgHeader*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgHeader::MergeFrom(const MsgHeader& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_cmd(from.cmd());
    }
    if (from._has_bit(1)) {
      set_length_data(from.length_data());
    }
    if (from._has_bit(2)) {
      set_status(from.status());
    }
    if (from._has_bit(3)) {
      set_token(from.token());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgHeader::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgHeader::CopyFrom(const MsgHeader& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgHeader::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void MsgHeader::Swap(MsgHeader* other) {
  if (other != this) {
    std::swap(cmd_, other->cmd_);
    std::swap(length_data_, other->length_data_);
    std::swap(status_, other->status_);
    std::swap(token_, other->token_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgHeader::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgHeader_descriptor_;
  metadata.reflection = MsgHeader_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace communication

// @@protoc_insertion_point(global_scope)
