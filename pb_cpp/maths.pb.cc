// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: maths.proto

#include "maths.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace maths {
class MathRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MathRequest>
      _instance;
} _MathRequest_default_instance_;
class MathResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MathResponse>
      _instance;
} _MathResponse_default_instance_;
}  // namespace maths
namespace protobuf_maths_2eproto {
static void InitDefaultsMathRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::maths::_MathRequest_default_instance_;
    new (ptr) ::maths::MathRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::maths::MathRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_MathRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsMathRequest}, {}};

static void InitDefaultsMathResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::maths::_MathResponse_default_instance_;
    new (ptr) ::maths::MathResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::maths::MathResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_MathResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsMathResponse}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_MathRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_MathResponse.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::maths::MathRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::maths::MathRequest, number1_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::maths::MathRequest, number2_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::maths::MathRequest, operation_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::maths::MathResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::maths::MathResponse, result_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::maths::MathRequest)},
  { 8, -1, sizeof(::maths::MathResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::maths::_MathRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::maths::_MathResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "maths.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\013maths.proto\022\005maths\"B\n\013MathRequest\022\017\n\007N"
      "umber1\030\001 \001(\001\022\017\n\007Number2\030\002 \001(\001\022\021\n\tOperati"
      "on\030\003 \001(\t\"\036\n\014MathResponse\022\016\n\006Result\030\001 \001(\001"
      "2D\n\005Maths\022;\n\014DoMathStream\022\022.maths.MathRe"
      "quest\032\023.maths.MathResponse(\0010\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 198);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "maths.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_maths_2eproto
namespace maths {

// ===================================================================

void MathRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MathRequest::kNumber1FieldNumber;
const int MathRequest::kNumber2FieldNumber;
const int MathRequest::kOperationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MathRequest::MathRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_maths_2eproto::scc_info_MathRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:maths.MathRequest)
}
MathRequest::MathRequest(const MathRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  operation_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.operation().size() > 0) {
    operation_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.operation_);
  }
  ::memcpy(&number1_, &from.number1_,
    static_cast<size_t>(reinterpret_cast<char*>(&number2_) -
    reinterpret_cast<char*>(&number1_)) + sizeof(number2_));
  // @@protoc_insertion_point(copy_constructor:maths.MathRequest)
}

void MathRequest::SharedCtor() {
  operation_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&number1_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&number2_) -
      reinterpret_cast<char*>(&number1_)) + sizeof(number2_));
}

MathRequest::~MathRequest() {
  // @@protoc_insertion_point(destructor:maths.MathRequest)
  SharedDtor();
}

void MathRequest::SharedDtor() {
  operation_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void MathRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* MathRequest::descriptor() {
  ::protobuf_maths_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_maths_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MathRequest& MathRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_maths_2eproto::scc_info_MathRequest.base);
  return *internal_default_instance();
}


void MathRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:maths.MathRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  operation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&number1_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&number2_) -
      reinterpret_cast<char*>(&number1_)) + sizeof(number2_));
  _internal_metadata_.Clear();
}

bool MathRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:maths.MathRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double Number1 = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &number1_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double Number2 = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &number2_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string Operation = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_operation()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->operation().data(), static_cast<int>(this->operation().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "maths.MathRequest.Operation"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:maths.MathRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:maths.MathRequest)
  return false;
#undef DO_
}

void MathRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:maths.MathRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double Number1 = 1;
  if (this->number1() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->number1(), output);
  }

  // double Number2 = 2;
  if (this->number2() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->number2(), output);
  }

  // string Operation = 3;
  if (this->operation().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->operation().data(), static_cast<int>(this->operation().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "maths.MathRequest.Operation");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->operation(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:maths.MathRequest)
}

::google::protobuf::uint8* MathRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:maths.MathRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double Number1 = 1;
  if (this->number1() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->number1(), target);
  }

  // double Number2 = 2;
  if (this->number2() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->number2(), target);
  }

  // string Operation = 3;
  if (this->operation().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->operation().data(), static_cast<int>(this->operation().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "maths.MathRequest.Operation");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->operation(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:maths.MathRequest)
  return target;
}

size_t MathRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:maths.MathRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string Operation = 3;
  if (this->operation().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->operation());
  }

  // double Number1 = 1;
  if (this->number1() != 0) {
    total_size += 1 + 8;
  }

  // double Number2 = 2;
  if (this->number2() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MathRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:maths.MathRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const MathRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MathRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:maths.MathRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:maths.MathRequest)
    MergeFrom(*source);
  }
}

void MathRequest::MergeFrom(const MathRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:maths.MathRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.operation().size() > 0) {

    operation_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.operation_);
  }
  if (from.number1() != 0) {
    set_number1(from.number1());
  }
  if (from.number2() != 0) {
    set_number2(from.number2());
  }
}

void MathRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:maths.MathRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MathRequest::CopyFrom(const MathRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:maths.MathRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MathRequest::IsInitialized() const {
  return true;
}

void MathRequest::Swap(MathRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MathRequest::InternalSwap(MathRequest* other) {
  using std::swap;
  operation_.Swap(&other->operation_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(number1_, other->number1_);
  swap(number2_, other->number2_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata MathRequest::GetMetadata() const {
  protobuf_maths_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_maths_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void MathResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MathResponse::kResultFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MathResponse::MathResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_maths_2eproto::scc_info_MathResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:maths.MathResponse)
}
MathResponse::MathResponse(const MathResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  result_ = from.result_;
  // @@protoc_insertion_point(copy_constructor:maths.MathResponse)
}

void MathResponse::SharedCtor() {
  result_ = 0;
}

MathResponse::~MathResponse() {
  // @@protoc_insertion_point(destructor:maths.MathResponse)
  SharedDtor();
}

void MathResponse::SharedDtor() {
}

void MathResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* MathResponse::descriptor() {
  ::protobuf_maths_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_maths_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MathResponse& MathResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_maths_2eproto::scc_info_MathResponse.base);
  return *internal_default_instance();
}


void MathResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:maths.MathResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  result_ = 0;
  _internal_metadata_.Clear();
}

bool MathResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:maths.MathResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double Result = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &result_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:maths.MathResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:maths.MathResponse)
  return false;
#undef DO_
}

void MathResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:maths.MathResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double Result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->result(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:maths.MathResponse)
}

::google::protobuf::uint8* MathResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:maths.MathResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double Result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->result(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:maths.MathResponse)
  return target;
}

size_t MathResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:maths.MathResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // double Result = 1;
  if (this->result() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MathResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:maths.MathResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const MathResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MathResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:maths.MathResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:maths.MathResponse)
    MergeFrom(*source);
  }
}

void MathResponse::MergeFrom(const MathResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:maths.MathResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.result() != 0) {
    set_result(from.result());
  }
}

void MathResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:maths.MathResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MathResponse::CopyFrom(const MathResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:maths.MathResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MathResponse::IsInitialized() const {
  return true;
}

void MathResponse::Swap(MathResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MathResponse::InternalSwap(MathResponse* other) {
  using std::swap;
  swap(result_, other->result_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata MathResponse::GetMetadata() const {
  protobuf_maths_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_maths_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace maths
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::maths::MathRequest* Arena::CreateMaybeMessage< ::maths::MathRequest >(Arena* arena) {
  return Arena::CreateInternal< ::maths::MathRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::maths::MathResponse* Arena::CreateMaybeMessage< ::maths::MathResponse >(Arena* arena) {
  return Arena::CreateInternal< ::maths::MathResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
