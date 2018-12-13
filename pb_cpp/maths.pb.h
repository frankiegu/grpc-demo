// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: maths.proto

#ifndef PROTOBUF_INCLUDED_maths_2eproto
#define PROTOBUF_INCLUDED_maths_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_maths_2eproto 

namespace protobuf_maths_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_maths_2eproto
namespace maths {
class MathRequest;
class MathRequestDefaultTypeInternal;
extern MathRequestDefaultTypeInternal _MathRequest_default_instance_;
class MathResponse;
class MathResponseDefaultTypeInternal;
extern MathResponseDefaultTypeInternal _MathResponse_default_instance_;
}  // namespace maths
namespace google {
namespace protobuf {
template<> ::maths::MathRequest* Arena::CreateMaybeMessage<::maths::MathRequest>(Arena*);
template<> ::maths::MathResponse* Arena::CreateMaybeMessage<::maths::MathResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace maths {

// ===================================================================

class MathRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:maths.MathRequest) */ {
 public:
  MathRequest();
  virtual ~MathRequest();

  MathRequest(const MathRequest& from);

  inline MathRequest& operator=(const MathRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MathRequest(MathRequest&& from) noexcept
    : MathRequest() {
    *this = ::std::move(from);
  }

  inline MathRequest& operator=(MathRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MathRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MathRequest* internal_default_instance() {
    return reinterpret_cast<const MathRequest*>(
               &_MathRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(MathRequest* other);
  friend void swap(MathRequest& a, MathRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MathRequest* New() const final {
    return CreateMaybeMessage<MathRequest>(NULL);
  }

  MathRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MathRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MathRequest& from);
  void MergeFrom(const MathRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MathRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string Operation = 3;
  void clear_operation();
  static const int kOperationFieldNumber = 3;
  const ::std::string& operation() const;
  void set_operation(const ::std::string& value);
  #if LANG_CXX11
  void set_operation(::std::string&& value);
  #endif
  void set_operation(const char* value);
  void set_operation(const char* value, size_t size);
  ::std::string* mutable_operation();
  ::std::string* release_operation();
  void set_allocated_operation(::std::string* operation);

  // double Number1 = 1;
  void clear_number1();
  static const int kNumber1FieldNumber = 1;
  double number1() const;
  void set_number1(double value);

  // double Number2 = 2;
  void clear_number2();
  static const int kNumber2FieldNumber = 2;
  double number2() const;
  void set_number2(double value);

  // @@protoc_insertion_point(class_scope:maths.MathRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr operation_;
  double number1_;
  double number2_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_maths_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class MathResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:maths.MathResponse) */ {
 public:
  MathResponse();
  virtual ~MathResponse();

  MathResponse(const MathResponse& from);

  inline MathResponse& operator=(const MathResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MathResponse(MathResponse&& from) noexcept
    : MathResponse() {
    *this = ::std::move(from);
  }

  inline MathResponse& operator=(MathResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MathResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MathResponse* internal_default_instance() {
    return reinterpret_cast<const MathResponse*>(
               &_MathResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(MathResponse* other);
  friend void swap(MathResponse& a, MathResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MathResponse* New() const final {
    return CreateMaybeMessage<MathResponse>(NULL);
  }

  MathResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MathResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MathResponse& from);
  void MergeFrom(const MathResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MathResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // double Result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  double result() const;
  void set_result(double value);

  // @@protoc_insertion_point(class_scope:maths.MathResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  double result_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_maths_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MathRequest

// double Number1 = 1;
inline void MathRequest::clear_number1() {
  number1_ = 0;
}
inline double MathRequest::number1() const {
  // @@protoc_insertion_point(field_get:maths.MathRequest.Number1)
  return number1_;
}
inline void MathRequest::set_number1(double value) {
  
  number1_ = value;
  // @@protoc_insertion_point(field_set:maths.MathRequest.Number1)
}

// double Number2 = 2;
inline void MathRequest::clear_number2() {
  number2_ = 0;
}
inline double MathRequest::number2() const {
  // @@protoc_insertion_point(field_get:maths.MathRequest.Number2)
  return number2_;
}
inline void MathRequest::set_number2(double value) {
  
  number2_ = value;
  // @@protoc_insertion_point(field_set:maths.MathRequest.Number2)
}

// string Operation = 3;
inline void MathRequest::clear_operation() {
  operation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MathRequest::operation() const {
  // @@protoc_insertion_point(field_get:maths.MathRequest.Operation)
  return operation_.GetNoArena();
}
inline void MathRequest::set_operation(const ::std::string& value) {
  
  operation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:maths.MathRequest.Operation)
}
#if LANG_CXX11
inline void MathRequest::set_operation(::std::string&& value) {
  
  operation_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:maths.MathRequest.Operation)
}
#endif
inline void MathRequest::set_operation(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  operation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:maths.MathRequest.Operation)
}
inline void MathRequest::set_operation(const char* value, size_t size) {
  
  operation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:maths.MathRequest.Operation)
}
inline ::std::string* MathRequest::mutable_operation() {
  
  // @@protoc_insertion_point(field_mutable:maths.MathRequest.Operation)
  return operation_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MathRequest::release_operation() {
  // @@protoc_insertion_point(field_release:maths.MathRequest.Operation)
  
  return operation_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MathRequest::set_allocated_operation(::std::string* operation) {
  if (operation != NULL) {
    
  } else {
    
  }
  operation_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), operation);
  // @@protoc_insertion_point(field_set_allocated:maths.MathRequest.Operation)
}

// -------------------------------------------------------------------

// MathResponse

// double Result = 1;
inline void MathResponse::clear_result() {
  result_ = 0;
}
inline double MathResponse::result() const {
  // @@protoc_insertion_point(field_get:maths.MathResponse.Result)
  return result_;
}
inline void MathResponse::set_result(double value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:maths.MathResponse.Result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace maths

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_maths_2eproto
