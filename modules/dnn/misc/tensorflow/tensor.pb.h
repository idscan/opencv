// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensor.proto

#ifndef PROTOBUF_tensor_2eproto__INCLUDED
#define PROTOBUF_tensor_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "tensor_shape.pb.h"
#include "types.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_tensor_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::PROTOBUF_NAMESPACE::internal::ParseTableField entries[];
  static const ::PROTOBUF_NAMESPACE::internal::AuxillaryParseTableField aux[];
  static const ::PROTOBUF_NAMESPACE::internal::ParseTable schema[1];
  static const ::PROTOBUF_NAMESPACE::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsTensorProtoImpl();
void InitDefaultsTensorProto();
inline void InitDefaults() {
  InitDefaultsTensorProto();
}
}  // namespace protobuf_tensor_2eproto
namespace opencv_tensorflow {
class TensorProto;
class TensorProtoDefaultTypeInternal;
extern TensorProtoDefaultTypeInternal _TensorProto_default_instance_;
}  // namespace opencv_tensorflow
namespace opencv_tensorflow {

// ===================================================================

class TensorProto : public ::PROTOBUF_NAMESPACE::Message /* @@protoc_insertion_point(class_definition:opencv_tensorflow.TensorProto) */ {
 public:
  TensorProto();
  virtual ~TensorProto();

  TensorProto(const TensorProto& from);

  inline TensorProto& operator=(const TensorProto& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TensorProto(TensorProto&& from) noexcept
    : TensorProto() {
    *this = ::std::move(from);
  }

  inline TensorProto& operator=(TensorProto&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::PROTOBUF_NAMESPACE::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE::Descriptor* descriptor();
  static const TensorProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TensorProto* internal_default_instance() {
    return reinterpret_cast<const TensorProto*>(
               &_TensorProto_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(TensorProto* other);
  void Swap(TensorProto* other);
  friend void swap(TensorProto& a, TensorProto& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TensorProto* New() const PROTOBUF_FINAL { return New(NULL); }

  TensorProto* New(::PROTOBUF_NAMESPACE::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::PROTOBUF_NAMESPACE::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::PROTOBUF_NAMESPACE::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TensorProto& from);
  void MergeFrom(const TensorProto& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::PROTOBUF_NAMESPACE::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::PROTOBUF_NAMESPACE::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(TensorProto* other);
  protected:
  explicit TensorProto(::PROTOBUF_NAMESPACE::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated float float_val = 5 [packed = true];
  int float_val_size() const;
  void clear_float_val();
  static const int kFloatValFieldNumber = 5;
  float float_val(int index) const;
  void set_float_val(int index, float value);
  void add_float_val(float value);
  const ::PROTOBUF_NAMESPACE::RepeatedField< float >&
      float_val() const;
  ::PROTOBUF_NAMESPACE::RepeatedField< float >*
      mutable_float_val();

  // repeated double double_val = 6 [packed = true];
  int double_val_size() const;
  void clear_double_val();
  static const int kDoubleValFieldNumber = 6;
  double double_val(int index) const;
  void set_double_val(int index, double value);
  void add_double_val(double value);
  const ::PROTOBUF_NAMESPACE::RepeatedField< double >&
      double_val() const;
  ::PROTOBUF_NAMESPACE::RepeatedField< double >*
      mutable_double_val();

  // repeated int32 int_val = 7 [packed = true];
  int int_val_size() const;
  void clear_int_val();
  static const int kIntValFieldNumber = 7;
  ::PROTOBUF_NAMESPACE::int32 int_val(int index) const;
  void set_int_val(int index, ::PROTOBUF_NAMESPACE::int32 value);
  void add_int_val(::PROTOBUF_NAMESPACE::int32 value);
  const ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int32 >&
      int_val() const;
  ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int32 >*
      mutable_int_val();

  // repeated bytes string_val = 8;
  int string_val_size() const;
  void clear_string_val();
  static const int kStringValFieldNumber = 8;
  const ::std::string& string_val(int index) const;
  ::std::string* mutable_string_val(int index);
  void set_string_val(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_string_val(int index, ::std::string&& value);
  #endif
  void set_string_val(int index, const char* value);
  void set_string_val(int index, const void* value, size_t size);
  ::std::string* add_string_val();
  void add_string_val(const ::std::string& value);
  #if LANG_CXX11
  void add_string_val(::std::string&& value);
  #endif
  void add_string_val(const char* value);
  void add_string_val(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE::RepeatedPtrField< ::std::string>& string_val() const;
  ::PROTOBUF_NAMESPACE::RepeatedPtrField< ::std::string>* mutable_string_val();

  // repeated float scomplex_val = 9 [packed = true];
  int scomplex_val_size() const;
  void clear_scomplex_val();
  static const int kScomplexValFieldNumber = 9;
  float scomplex_val(int index) const;
  void set_scomplex_val(int index, float value);
  void add_scomplex_val(float value);
  const ::PROTOBUF_NAMESPACE::RepeatedField< float >&
      scomplex_val() const;
  ::PROTOBUF_NAMESPACE::RepeatedField< float >*
      mutable_scomplex_val();

  // repeated int64 int64_val = 10 [packed = true];
  int int64_val_size() const;
  void clear_int64_val();
  static const int kInt64ValFieldNumber = 10;
  ::PROTOBUF_NAMESPACE::int64 int64_val(int index) const;
  void set_int64_val(int index, ::PROTOBUF_NAMESPACE::int64 value);
  void add_int64_val(::PROTOBUF_NAMESPACE::int64 value);
  const ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int64 >&
      int64_val() const;
  ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int64 >*
      mutable_int64_val();

  // repeated bool bool_val = 11 [packed = true];
  int bool_val_size() const;
  void clear_bool_val();
  static const int kBoolValFieldNumber = 11;
  bool bool_val(int index) const;
  void set_bool_val(int index, bool value);
  void add_bool_val(bool value);
  const ::PROTOBUF_NAMESPACE::RepeatedField< bool >&
      bool_val() const;
  ::PROTOBUF_NAMESPACE::RepeatedField< bool >*
      mutable_bool_val();

  // repeated double dcomplex_val = 12 [packed = true];
  int dcomplex_val_size() const;
  void clear_dcomplex_val();
  static const int kDcomplexValFieldNumber = 12;
  double dcomplex_val(int index) const;
  void set_dcomplex_val(int index, double value);
  void add_dcomplex_val(double value);
  const ::PROTOBUF_NAMESPACE::RepeatedField< double >&
      dcomplex_val() const;
  ::PROTOBUF_NAMESPACE::RepeatedField< double >*
      mutable_dcomplex_val();

  // repeated int32 half_val = 13 [packed = true];
  int half_val_size() const;
  void clear_half_val();
  static const int kHalfValFieldNumber = 13;
  ::PROTOBUF_NAMESPACE::int32 half_val(int index) const;
  void set_half_val(int index, ::PROTOBUF_NAMESPACE::int32 value);
  void add_half_val(::PROTOBUF_NAMESPACE::int32 value);
  const ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int32 >&
      half_val() const;
  ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int32 >*
      mutable_half_val();

  // bytes tensor_content = 4;
  void clear_tensor_content();
  static const int kTensorContentFieldNumber = 4;
  const ::std::string& tensor_content() const;
  void set_tensor_content(const ::std::string& value);
  #if LANG_CXX11
  void set_tensor_content(::std::string&& value);
  #endif
  void set_tensor_content(const char* value);
  void set_tensor_content(const void* value, size_t size);
  ::std::string* mutable_tensor_content();
  ::std::string* release_tensor_content();
  void set_allocated_tensor_content(::std::string* tensor_content);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_tensor_content();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_tensor_content(
      ::std::string* tensor_content);

  // .opencv_tensorflow.TensorShapeProto tensor_shape = 2;
  bool has_tensor_shape() const;
  void clear_tensor_shape();
  static const int kTensorShapeFieldNumber = 2;
  private:
  void _slow_mutable_tensor_shape();
  public:
  const ::opencv_tensorflow::TensorShapeProto& tensor_shape() const;
  ::opencv_tensorflow::TensorShapeProto* release_tensor_shape();
  ::opencv_tensorflow::TensorShapeProto* mutable_tensor_shape();
  void set_allocated_tensor_shape(::opencv_tensorflow::TensorShapeProto* tensor_shape);
  void unsafe_arena_set_allocated_tensor_shape(
      ::opencv_tensorflow::TensorShapeProto* tensor_shape);
  ::opencv_tensorflow::TensorShapeProto* unsafe_arena_release_tensor_shape();

  // .opencv_tensorflow.DataType dtype = 1;
  void clear_dtype();
  static const int kDtypeFieldNumber = 1;
  ::opencv_tensorflow::DataType dtype() const;
  void set_dtype(::opencv_tensorflow::DataType value);

  // int32 version_number = 3;
  void clear_version_number();
  static const int kVersionNumberFieldNumber = 3;
  ::PROTOBUF_NAMESPACE::int32 version_number() const;
  void set_version_number(::PROTOBUF_NAMESPACE::int32 value);

  // @@protoc_insertion_point(class_scope:opencv_tensorflow.TensorProto)
 private:

  ::PROTOBUF_NAMESPACE::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE::RepeatedField< float > float_val_;
  mutable int _float_val_cached_byte_size_;
  ::PROTOBUF_NAMESPACE::RepeatedField< double > double_val_;
  mutable int _double_val_cached_byte_size_;
  ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int32 > int_val_;
  mutable int _int_val_cached_byte_size_;
  ::PROTOBUF_NAMESPACE::RepeatedPtrField< ::std::string> string_val_;
  ::PROTOBUF_NAMESPACE::RepeatedField< float > scomplex_val_;
  mutable int _scomplex_val_cached_byte_size_;
  ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int64 > int64_val_;
  mutable int _int64_val_cached_byte_size_;
  ::PROTOBUF_NAMESPACE::RepeatedField< bool > bool_val_;
  mutable int _bool_val_cached_byte_size_;
  ::PROTOBUF_NAMESPACE::RepeatedField< double > dcomplex_val_;
  mutable int _dcomplex_val_cached_byte_size_;
  ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int32 > half_val_;
  mutable int _half_val_cached_byte_size_;
  ::PROTOBUF_NAMESPACE::internal::ArenaStringPtr tensor_content_;
  ::opencv_tensorflow::TensorShapeProto* tensor_shape_;
  int dtype_;
  ::PROTOBUF_NAMESPACE::int32 version_number_;
  mutable int _cached_size_;
  friend struct ::protobuf_tensor_2eproto::TableStruct;
  friend void ::protobuf_tensor_2eproto::InitDefaultsTensorProtoImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TensorProto

// .opencv_tensorflow.DataType dtype = 1;
inline void TensorProto::clear_dtype() {
  dtype_ = 0;
}
inline ::opencv_tensorflow::DataType TensorProto::dtype() const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.TensorProto.dtype)
  return static_cast< ::opencv_tensorflow::DataType >(dtype_);
}
inline void TensorProto::set_dtype(::opencv_tensorflow::DataType value) {

  dtype_ = value;
  // @@protoc_insertion_point(field_set:opencv_tensorflow.TensorProto.dtype)
}

// .opencv_tensorflow.TensorShapeProto tensor_shape = 2;
inline bool TensorProto::has_tensor_shape() const {
  return this != internal_default_instance() && tensor_shape_ != NULL;
}
inline const ::opencv_tensorflow::TensorShapeProto& TensorProto::tensor_shape() const {
  const ::opencv_tensorflow::TensorShapeProto* p = tensor_shape_;
  // @@protoc_insertion_point(field_get:opencv_tensorflow.TensorProto.tensor_shape)
  return p != NULL ? *p : *reinterpret_cast<const ::opencv_tensorflow::TensorShapeProto*>(
      &::opencv_tensorflow::_TensorShapeProto_default_instance_);
}
inline ::opencv_tensorflow::TensorShapeProto* TensorProto::release_tensor_shape() {
  // @@protoc_insertion_point(field_release:opencv_tensorflow.TensorProto.tensor_shape)

  ::opencv_tensorflow::TensorShapeProto* temp = tensor_shape_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::PROTOBUF_NAMESPACE::internal::DuplicateIfNonNull(temp, NULL);
  }
  tensor_shape_ = NULL;
  return temp;
}
inline ::opencv_tensorflow::TensorShapeProto* TensorProto::unsafe_arena_release_tensor_shape() {
  // @@protoc_insertion_point(field_unsafe_arena_release:opencv_tensorflow.TensorProto.tensor_shape)

  ::opencv_tensorflow::TensorShapeProto* temp = tensor_shape_;
  tensor_shape_ = NULL;
  return temp;
}
inline ::opencv_tensorflow::TensorShapeProto* TensorProto::mutable_tensor_shape() {

  if (tensor_shape_ == NULL) {
    _slow_mutable_tensor_shape();
  }
  // @@protoc_insertion_point(field_mutable:opencv_tensorflow.TensorProto.tensor_shape)
  return tensor_shape_;
}
inline void TensorProto::set_allocated_tensor_shape(::opencv_tensorflow::TensorShapeProto* tensor_shape) {
  ::PROTOBUF_NAMESPACE::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE::MessageLite*>(tensor_shape_);
  }
  if (tensor_shape) {
    ::PROTOBUF_NAMESPACE::Arena* submessage_arena =
      reinterpret_cast< ::PROTOBUF_NAMESPACE::MessageLite*>(tensor_shape)->GetArena();
    if (message_arena != submessage_arena) {
      tensor_shape = ::PROTOBUF_NAMESPACE::internal::GetOwnedMessage(
          message_arena, tensor_shape, submessage_arena);
    }

  } else {

  }
  tensor_shape_ = tensor_shape;
  // @@protoc_insertion_point(field_set_allocated:opencv_tensorflow.TensorProto.tensor_shape)
}

// int32 version_number = 3;
inline void TensorProto::clear_version_number() {
  version_number_ = 0;
}
inline ::PROTOBUF_NAMESPACE::int32 TensorProto::version_number() const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.TensorProto.version_number)
  return version_number_;
}
inline void TensorProto::set_version_number(::PROTOBUF_NAMESPACE::int32 value) {

  version_number_ = value;
  // @@protoc_insertion_point(field_set:opencv_tensorflow.TensorProto.version_number)
}

// bytes tensor_content = 4;
inline void TensorProto::clear_tensor_content() {
  tensor_content_.ClearToEmpty(&::PROTOBUF_NAMESPACE::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& TensorProto::tensor_content() const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.TensorProto.tensor_content)
  return tensor_content_.Get();
}
inline void TensorProto::set_tensor_content(const ::std::string& value) {

  tensor_content_.Set(&::PROTOBUF_NAMESPACE::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:opencv_tensorflow.TensorProto.tensor_content)
}
#if LANG_CXX11
inline void TensorProto::set_tensor_content(::std::string&& value) {

  tensor_content_.Set(
    &::PROTOBUF_NAMESPACE::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:opencv_tensorflow.TensorProto.tensor_content)
}
#endif
inline void TensorProto::set_tensor_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);

  tensor_content_.Set(&::PROTOBUF_NAMESPACE::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:opencv_tensorflow.TensorProto.tensor_content)
}
inline void TensorProto::set_tensor_content(const void* value,
    size_t size) {

  tensor_content_.Set(&::PROTOBUF_NAMESPACE::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:opencv_tensorflow.TensorProto.tensor_content)
}
inline ::std::string* TensorProto::mutable_tensor_content() {

  // @@protoc_insertion_point(field_mutable:opencv_tensorflow.TensorProto.tensor_content)
  return tensor_content_.Mutable(&::PROTOBUF_NAMESPACE::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* TensorProto::release_tensor_content() {
  // @@protoc_insertion_point(field_release:opencv_tensorflow.TensorProto.tensor_content)

  return tensor_content_.Release(&::PROTOBUF_NAMESPACE::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void TensorProto::set_allocated_tensor_content(::std::string* tensor_content) {
  if (tensor_content != NULL) {

  } else {

  }
  tensor_content_.SetAllocated(&::PROTOBUF_NAMESPACE::internal::GetEmptyStringAlreadyInited(), tensor_content,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:opencv_tensorflow.TensorProto.tensor_content)
}
inline ::std::string* TensorProto::unsafe_arena_release_tensor_content() {
  // @@protoc_insertion_point(field_unsafe_arena_release:opencv_tensorflow.TensorProto.tensor_content)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);

  return tensor_content_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void TensorProto::unsafe_arena_set_allocated_tensor_content(
    ::std::string* tensor_content) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (tensor_content != NULL) {

  } else {

  }
  tensor_content_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE::internal::GetEmptyStringAlreadyInited(),
      tensor_content, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:opencv_tensorflow.TensorProto.tensor_content)
}

// repeated int32 half_val = 13 [packed = true];
inline int TensorProto::half_val_size() const {
  return half_val_.size();
}
inline void TensorProto::clear_half_val() {
  half_val_.Clear();
}
inline ::PROTOBUF_NAMESPACE::int32 TensorProto::half_val(int index) const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.TensorProto.half_val)
  return half_val_.Get(index);
}
inline void TensorProto::set_half_val(int index, ::PROTOBUF_NAMESPACE::int32 value) {
  half_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:opencv_tensorflow.TensorProto.half_val)
}
inline void TensorProto::add_half_val(::PROTOBUF_NAMESPACE::int32 value) {
  half_val_.Add(value);
  // @@protoc_insertion_point(field_add:opencv_tensorflow.TensorProto.half_val)
}
inline const ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int32 >&
TensorProto::half_val() const {
  // @@protoc_insertion_point(field_list:opencv_tensorflow.TensorProto.half_val)
  return half_val_;
}
inline ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int32 >*
TensorProto::mutable_half_val() {
  // @@protoc_insertion_point(field_mutable_list:opencv_tensorflow.TensorProto.half_val)
  return &half_val_;
}

// repeated float float_val = 5 [packed = true];
inline int TensorProto::float_val_size() const {
  return float_val_.size();
}
inline void TensorProto::clear_float_val() {
  float_val_.Clear();
}
inline float TensorProto::float_val(int index) const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.TensorProto.float_val)
  return float_val_.Get(index);
}
inline void TensorProto::set_float_val(int index, float value) {
  float_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:opencv_tensorflow.TensorProto.float_val)
}
inline void TensorProto::add_float_val(float value) {
  float_val_.Add(value);
  // @@protoc_insertion_point(field_add:opencv_tensorflow.TensorProto.float_val)
}
inline const ::PROTOBUF_NAMESPACE::RepeatedField< float >&
TensorProto::float_val() const {
  // @@protoc_insertion_point(field_list:opencv_tensorflow.TensorProto.float_val)
  return float_val_;
}
inline ::PROTOBUF_NAMESPACE::RepeatedField< float >*
TensorProto::mutable_float_val() {
  // @@protoc_insertion_point(field_mutable_list:opencv_tensorflow.TensorProto.float_val)
  return &float_val_;
}

// repeated double double_val = 6 [packed = true];
inline int TensorProto::double_val_size() const {
  return double_val_.size();
}
inline void TensorProto::clear_double_val() {
  double_val_.Clear();
}
inline double TensorProto::double_val(int index) const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.TensorProto.double_val)
  return double_val_.Get(index);
}
inline void TensorProto::set_double_val(int index, double value) {
  double_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:opencv_tensorflow.TensorProto.double_val)
}
inline void TensorProto::add_double_val(double value) {
  double_val_.Add(value);
  // @@protoc_insertion_point(field_add:opencv_tensorflow.TensorProto.double_val)
}
inline const ::PROTOBUF_NAMESPACE::RepeatedField< double >&
TensorProto::double_val() const {
  // @@protoc_insertion_point(field_list:opencv_tensorflow.TensorProto.double_val)
  return double_val_;
}
inline ::PROTOBUF_NAMESPACE::RepeatedField< double >*
TensorProto::mutable_double_val() {
  // @@protoc_insertion_point(field_mutable_list:opencv_tensorflow.TensorProto.double_val)
  return &double_val_;
}

// repeated int32 int_val = 7 [packed = true];
inline int TensorProto::int_val_size() const {
  return int_val_.size();
}
inline void TensorProto::clear_int_val() {
  int_val_.Clear();
}
inline ::PROTOBUF_NAMESPACE::int32 TensorProto::int_val(int index) const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.TensorProto.int_val)
  return int_val_.Get(index);
}
inline void TensorProto::set_int_val(int index, ::PROTOBUF_NAMESPACE::int32 value) {
  int_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:opencv_tensorflow.TensorProto.int_val)
}
inline void TensorProto::add_int_val(::PROTOBUF_NAMESPACE::int32 value) {
  int_val_.Add(value);
  // @@protoc_insertion_point(field_add:opencv_tensorflow.TensorProto.int_val)
}
inline const ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int32 >&
TensorProto::int_val() const {
  // @@protoc_insertion_point(field_list:opencv_tensorflow.TensorProto.int_val)
  return int_val_;
}
inline ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int32 >*
TensorProto::mutable_int_val() {
  // @@protoc_insertion_point(field_mutable_list:opencv_tensorflow.TensorProto.int_val)
  return &int_val_;
}

// repeated bytes string_val = 8;
inline int TensorProto::string_val_size() const {
  return string_val_.size();
}
inline void TensorProto::clear_string_val() {
  string_val_.Clear();
}
inline const ::std::string& TensorProto::string_val(int index) const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.TensorProto.string_val)
  return string_val_.Get(index);
}
inline ::std::string* TensorProto::mutable_string_val(int index) {
  // @@protoc_insertion_point(field_mutable:opencv_tensorflow.TensorProto.string_val)
  return string_val_.Mutable(index);
}
inline void TensorProto::set_string_val(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:opencv_tensorflow.TensorProto.string_val)
  string_val_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void TensorProto::set_string_val(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:opencv_tensorflow.TensorProto.string_val)
  string_val_.Mutable(index)->assign(std::move(value));
}
#endif
inline void TensorProto::set_string_val(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  string_val_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opencv_tensorflow.TensorProto.string_val)
}
inline void TensorProto::set_string_val(int index, const void* value, size_t size) {
  string_val_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opencv_tensorflow.TensorProto.string_val)
}
inline ::std::string* TensorProto::add_string_val() {
  // @@protoc_insertion_point(field_add_mutable:opencv_tensorflow.TensorProto.string_val)
  return string_val_.Add();
}
inline void TensorProto::add_string_val(const ::std::string& value) {
  string_val_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opencv_tensorflow.TensorProto.string_val)
}
#if LANG_CXX11
inline void TensorProto::add_string_val(::std::string&& value) {
  string_val_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opencv_tensorflow.TensorProto.string_val)
}
#endif
inline void TensorProto::add_string_val(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  string_val_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opencv_tensorflow.TensorProto.string_val)
}
inline void TensorProto::add_string_val(const void* value, size_t size) {
  string_val_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opencv_tensorflow.TensorProto.string_val)
}
inline const ::PROTOBUF_NAMESPACE::RepeatedPtrField< ::std::string>&
TensorProto::string_val() const {
  // @@protoc_insertion_point(field_list:opencv_tensorflow.TensorProto.string_val)
  return string_val_;
}
inline ::PROTOBUF_NAMESPACE::RepeatedPtrField< ::std::string>*
TensorProto::mutable_string_val() {
  // @@protoc_insertion_point(field_mutable_list:opencv_tensorflow.TensorProto.string_val)
  return &string_val_;
}

// repeated float scomplex_val = 9 [packed = true];
inline int TensorProto::scomplex_val_size() const {
  return scomplex_val_.size();
}
inline void TensorProto::clear_scomplex_val() {
  scomplex_val_.Clear();
}
inline float TensorProto::scomplex_val(int index) const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.TensorProto.scomplex_val)
  return scomplex_val_.Get(index);
}
inline void TensorProto::set_scomplex_val(int index, float value) {
  scomplex_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:opencv_tensorflow.TensorProto.scomplex_val)
}
inline void TensorProto::add_scomplex_val(float value) {
  scomplex_val_.Add(value);
  // @@protoc_insertion_point(field_add:opencv_tensorflow.TensorProto.scomplex_val)
}
inline const ::PROTOBUF_NAMESPACE::RepeatedField< float >&
TensorProto::scomplex_val() const {
  // @@protoc_insertion_point(field_list:opencv_tensorflow.TensorProto.scomplex_val)
  return scomplex_val_;
}
inline ::PROTOBUF_NAMESPACE::RepeatedField< float >*
TensorProto::mutable_scomplex_val() {
  // @@protoc_insertion_point(field_mutable_list:opencv_tensorflow.TensorProto.scomplex_val)
  return &scomplex_val_;
}

// repeated int64 int64_val = 10 [packed = true];
inline int TensorProto::int64_val_size() const {
  return int64_val_.size();
}
inline void TensorProto::clear_int64_val() {
  int64_val_.Clear();
}
inline ::PROTOBUF_NAMESPACE::int64 TensorProto::int64_val(int index) const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.TensorProto.int64_val)
  return int64_val_.Get(index);
}
inline void TensorProto::set_int64_val(int index, ::PROTOBUF_NAMESPACE::int64 value) {
  int64_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:opencv_tensorflow.TensorProto.int64_val)
}
inline void TensorProto::add_int64_val(::PROTOBUF_NAMESPACE::int64 value) {
  int64_val_.Add(value);
  // @@protoc_insertion_point(field_add:opencv_tensorflow.TensorProto.int64_val)
}
inline const ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int64 >&
TensorProto::int64_val() const {
  // @@protoc_insertion_point(field_list:opencv_tensorflow.TensorProto.int64_val)
  return int64_val_;
}
inline ::PROTOBUF_NAMESPACE::RepeatedField< ::PROTOBUF_NAMESPACE::int64 >*
TensorProto::mutable_int64_val() {
  // @@protoc_insertion_point(field_mutable_list:opencv_tensorflow.TensorProto.int64_val)
  return &int64_val_;
}

// repeated bool bool_val = 11 [packed = true];
inline int TensorProto::bool_val_size() const {
  return bool_val_.size();
}
inline void TensorProto::clear_bool_val() {
  bool_val_.Clear();
}
inline bool TensorProto::bool_val(int index) const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.TensorProto.bool_val)
  return bool_val_.Get(index);
}
inline void TensorProto::set_bool_val(int index, bool value) {
  bool_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:opencv_tensorflow.TensorProto.bool_val)
}
inline void TensorProto::add_bool_val(bool value) {
  bool_val_.Add(value);
  // @@protoc_insertion_point(field_add:opencv_tensorflow.TensorProto.bool_val)
}
inline const ::PROTOBUF_NAMESPACE::RepeatedField< bool >&
TensorProto::bool_val() const {
  // @@protoc_insertion_point(field_list:opencv_tensorflow.TensorProto.bool_val)
  return bool_val_;
}
inline ::PROTOBUF_NAMESPACE::RepeatedField< bool >*
TensorProto::mutable_bool_val() {
  // @@protoc_insertion_point(field_mutable_list:opencv_tensorflow.TensorProto.bool_val)
  return &bool_val_;
}

// repeated double dcomplex_val = 12 [packed = true];
inline int TensorProto::dcomplex_val_size() const {
  return dcomplex_val_.size();
}
inline void TensorProto::clear_dcomplex_val() {
  dcomplex_val_.Clear();
}
inline double TensorProto::dcomplex_val(int index) const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.TensorProto.dcomplex_val)
  return dcomplex_val_.Get(index);
}
inline void TensorProto::set_dcomplex_val(int index, double value) {
  dcomplex_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:opencv_tensorflow.TensorProto.dcomplex_val)
}
inline void TensorProto::add_dcomplex_val(double value) {
  dcomplex_val_.Add(value);
  // @@protoc_insertion_point(field_add:opencv_tensorflow.TensorProto.dcomplex_val)
}
inline const ::PROTOBUF_NAMESPACE::RepeatedField< double >&
TensorProto::dcomplex_val() const {
  // @@protoc_insertion_point(field_list:opencv_tensorflow.TensorProto.dcomplex_val)
  return dcomplex_val_;
}
inline ::PROTOBUF_NAMESPACE::RepeatedField< double >*
TensorProto::mutable_dcomplex_val() {
  // @@protoc_insertion_point(field_mutable_list:opencv_tensorflow.TensorProto.dcomplex_val)
  return &dcomplex_val_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace opencv_tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensor_2eproto__INCLUDED
