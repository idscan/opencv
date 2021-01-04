// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: versions.proto

#include "versions.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace opencv_tensorflow {
class VersionDefDefaultTypeInternal {
 public:
  ::cv::protobuf::internal::ExplicitlyConstructed<VersionDef>
      _instance;
} _VersionDef_default_instance_;
}  // namespace opencv_tensorflow
namespace protobuf_versions_2eproto {
void InitDefaultsVersionDefImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::cv::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::cv::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::opencv_tensorflow::_VersionDef_default_instance_;
    new (ptr) ::opencv_tensorflow::VersionDef();
    ::cv::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opencv_tensorflow::VersionDef::InitAsDefaultInstance();
}

void InitDefaultsVersionDef() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::cv::protobuf::GoogleOnceInit(&once, &InitDefaultsVersionDefImpl);
}

::cv::protobuf::Metadata file_level_metadata[1];

const ::cv::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::opencv_tensorflow::VersionDef, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::opencv_tensorflow::VersionDef, producer_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::opencv_tensorflow::VersionDef, min_consumer_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::opencv_tensorflow::VersionDef, bad_consumers_),
};
static const ::cv::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::opencv_tensorflow::VersionDef)},
};

static ::cv::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::cv::protobuf::Message*>(&::opencv_tensorflow::_VersionDef_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::cv::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "versions.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::cv::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::cv::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\016versions.proto\022\021opencv_tensorflow\"K\n\nV"
      "ersionDef\022\020\n\010producer\030\001 \001(\005\022\024\n\014min_consu"
      "mer\030\002 \001(\005\022\025\n\rbad_consumers\030\003 \003(\005B/\n\030org."
      "tensorflow.frameworkB\016VersionsProtosP\001\370\001"
      "\001b\006proto3"
  };
  ::cv::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 169);
  ::cv::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "versions.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::cv::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_versions_2eproto
namespace opencv_tensorflow {

// ===================================================================

void VersionDef::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VersionDef::kProducerFieldNumber;
const int VersionDef::kMinConsumerFieldNumber;
const int VersionDef::kBadConsumersFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VersionDef::VersionDef()
  : ::cv::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_versions_2eproto::InitDefaultsVersionDef();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opencv_tensorflow.VersionDef)
}
VersionDef::VersionDef(::cv::protobuf::Arena* arena)
  : ::cv::protobuf::Message(),
  _internal_metadata_(arena),
  bad_consumers_(arena) {
  ::protobuf_versions_2eproto::InitDefaultsVersionDef();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:opencv_tensorflow.VersionDef)
}
VersionDef::VersionDef(const VersionDef& from)
  : ::cv::protobuf::Message(),
      _internal_metadata_(NULL),
      bad_consumers_(from.bad_consumers_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&producer_, &from.producer_,
    static_cast<size_t>(reinterpret_cast<char*>(&min_consumer_) -
    reinterpret_cast<char*>(&producer_)) + sizeof(min_consumer_));
  // @@protoc_insertion_point(copy_constructor:opencv_tensorflow.VersionDef)
}

void VersionDef::SharedCtor() {
  ::memset(&producer_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&min_consumer_) -
      reinterpret_cast<char*>(&producer_)) + sizeof(min_consumer_));
  _cached_size_ = 0;
}

VersionDef::~VersionDef() {
  // @@protoc_insertion_point(destructor:opencv_tensorflow.VersionDef)
  SharedDtor();
}

void VersionDef::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
}

void VersionDef::ArenaDtor(void* object) {
  VersionDef* _this = reinterpret_cast< VersionDef* >(object);
  (void)_this;
}
void VersionDef::RegisterArenaDtor(::cv::protobuf::Arena* arena) {
}
void VersionDef::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::cv::protobuf::Descriptor* VersionDef::descriptor() {
  ::protobuf_versions_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_versions_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VersionDef& VersionDef::default_instance() {
  ::protobuf_versions_2eproto::InitDefaultsVersionDef();
  return *internal_default_instance();
}

VersionDef* VersionDef::New(::cv::protobuf::Arena* arena) const {
  return ::cv::protobuf::Arena::CreateMessage<VersionDef>(arena);
}

void VersionDef::Clear() {
// @@protoc_insertion_point(message_clear_start:opencv_tensorflow.VersionDef)
  ::cv::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  bad_consumers_.Clear();
  ::memset(&producer_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&min_consumer_) -
      reinterpret_cast<char*>(&producer_)) + sizeof(min_consumer_));
  _internal_metadata_.Clear();
}

bool VersionDef::MergePartialFromCodedStream(
    ::cv::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::cv::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:opencv_tensorflow.VersionDef)
  for (;;) {
    ::std::pair< ::cv::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::cv::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 producer = 1;
      case 1: {
        if (static_cast< ::cv::protobuf::uint8>(tag) ==
            static_cast< ::cv::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::cv::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::cv::protobuf::int32, ::cv::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &producer_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 min_consumer = 2;
      case 2: {
        if (static_cast< ::cv::protobuf::uint8>(tag) ==
            static_cast< ::cv::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::cv::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::cv::protobuf::int32, ::cv::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &min_consumer_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated int32 bad_consumers = 3;
      case 3: {
        if (static_cast< ::cv::protobuf::uint8>(tag) ==
            static_cast< ::cv::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_((::cv::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::cv::protobuf::int32, ::cv::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_bad_consumers())));
        } else if (
            static_cast< ::cv::protobuf::uint8>(tag) ==
            static_cast< ::cv::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          DO_((::cv::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::cv::protobuf::int32, ::cv::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 26u, input, this->mutable_bad_consumers())));
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
        DO_(::cv::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:opencv_tensorflow.VersionDef)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opencv_tensorflow.VersionDef)
  return false;
#undef DO_
}

void VersionDef::SerializeWithCachedSizes(
    ::cv::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opencv_tensorflow.VersionDef)
  ::cv::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 producer = 1;
  if (this->producer() != 0) {
    ::cv::protobuf::internal::WireFormatLite::WriteInt32(1, this->producer(), output);
  }

  // int32 min_consumer = 2;
  if (this->min_consumer() != 0) {
    ::cv::protobuf::internal::WireFormatLite::WriteInt32(2, this->min_consumer(), output);
  }

  // repeated int32 bad_consumers = 3;
  if (this->bad_consumers_size() > 0) {
    ::cv::protobuf::internal::WireFormatLite::WriteTag(3, ::cv::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::cv::protobuf::uint32>(
        _bad_consumers_cached_byte_size_));
  }
  for (int i = 0, n = this->bad_consumers_size(); i < n; i++) {
    ::cv::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->bad_consumers(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::cv::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::cv::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::cv::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:opencv_tensorflow.VersionDef)
}

::cv::protobuf::uint8* VersionDef::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::cv::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:opencv_tensorflow.VersionDef)
  ::cv::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 producer = 1;
  if (this->producer() != 0) {
    target = ::cv::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->producer(), target);
  }

  // int32 min_consumer = 2;
  if (this->min_consumer() != 0) {
    target = ::cv::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->min_consumer(), target);
  }

  // repeated int32 bad_consumers = 3;
  if (this->bad_consumers_size() > 0) {
    target = ::cv::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::cv::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::cv::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::cv::protobuf::int32>(
            _bad_consumers_cached_byte_size_), target);
    target = ::cv::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->bad_consumers_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::cv::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::cv::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::cv::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:opencv_tensorflow.VersionDef)
  return target;
}

size_t VersionDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opencv_tensorflow.VersionDef)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::cv::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::cv::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::cv::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated int32 bad_consumers = 3;
  {
    size_t data_size = ::cv::protobuf::internal::WireFormatLite::
      Int32Size(this->bad_consumers_);
    if (data_size > 0) {
      total_size += 1 +
        ::cv::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::cv::protobuf::int32>(data_size));
    }
    int cached_size = ::cv::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _bad_consumers_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // int32 producer = 1;
  if (this->producer() != 0) {
    total_size += 1 +
      ::cv::protobuf::internal::WireFormatLite::Int32Size(
        this->producer());
  }

  // int32 min_consumer = 2;
  if (this->min_consumer() != 0) {
    total_size += 1 +
      ::cv::protobuf::internal::WireFormatLite::Int32Size(
        this->min_consumer());
  }

  int cached_size = ::cv::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VersionDef::MergeFrom(const ::cv::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:opencv_tensorflow.VersionDef)
  GOOGLE_DCHECK_NE(&from, this);
  const VersionDef* source =
      ::cv::protobuf::internal::DynamicCastToGenerated<const VersionDef>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:opencv_tensorflow.VersionDef)
    ::cv::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:opencv_tensorflow.VersionDef)
    MergeFrom(*source);
  }
}

void VersionDef::MergeFrom(const VersionDef& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opencv_tensorflow.VersionDef)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::cv::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  bad_consumers_.MergeFrom(from.bad_consumers_);
  if (from.producer() != 0) {
    set_producer(from.producer());
  }
  if (from.min_consumer() != 0) {
    set_min_consumer(from.min_consumer());
  }
}

void VersionDef::CopyFrom(const ::cv::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:opencv_tensorflow.VersionDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VersionDef::CopyFrom(const VersionDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opencv_tensorflow.VersionDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VersionDef::IsInitialized() const {
  return true;
}

void VersionDef::Swap(VersionDef* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    VersionDef* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void VersionDef::UnsafeArenaSwap(VersionDef* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void VersionDef::InternalSwap(VersionDef* other) {
  using std::swap;
  bad_consumers_.InternalSwap(&other->bad_consumers_);
  swap(producer_, other->producer_);
  swap(min_consumer_, other->min_consumer_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::cv::protobuf::Metadata VersionDef::GetMetadata() const {
  protobuf_versions_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_versions_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace opencv_tensorflow

// @@protoc_insertion_point(global_scope)
