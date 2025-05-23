// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: helper.proto

#include "helper.pb.h"

#if defined(PLATFORM_WINDOWS)
#pragma warning(disable : 4125 4800)
#endif

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
constexpr FHelper::FHelper(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : ip_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , port_(0){}
struct FHelperDefaultTypeInternal {
  constexpr FHelperDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~FHelperDefaultTypeInternal() {}
  union {
    FHelper _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT FHelperDefaultTypeInternal _FHelper_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_helper_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_helper_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_helper_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_helper_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::FHelper, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::FHelper, ip_),
  PROTOBUF_FIELD_OFFSET(::FHelper, port_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::FHelper)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_FHelper_default_instance_),
};

const char descriptor_table_protodef_helper_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014helper.proto\"#\n\007FHelper\022\n\n\002Ip\030\001 \001(\t\022\014\n"
  "\004port\030\002 \001(\005b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_helper_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_helper_2eproto = {
  false, false, 59, descriptor_table_protodef_helper_2eproto, "helper.proto", 
  &descriptor_table_helper_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_helper_2eproto::offsets,
  file_level_metadata_helper_2eproto, file_level_enum_descriptors_helper_2eproto, file_level_service_descriptors_helper_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_helper_2eproto_getter() {
  return &descriptor_table_helper_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_helper_2eproto(&descriptor_table_helper_2eproto);

// ===================================================================

class FHelper::_Internal {
 public:
};

FHelper::FHelper(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:FHelper)
}
FHelper::FHelper(const FHelper& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ip_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_ip().empty()) {
    ip_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_ip(), 
      GetArenaForAllocation());
  }
  port_ = from.port_;
  // @@protoc_insertion_point(copy_constructor:FHelper)
}

void FHelper::SharedCtor() {
ip_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
port_ = 0;
}

FHelper::~FHelper() {
  // @@protoc_insertion_point(destructor:FHelper)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void FHelper::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  ip_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void FHelper::ArenaDtor(void* object) {
  FHelper* _this = reinterpret_cast< FHelper* >(object);
  (void)_this;
}
void FHelper::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void FHelper::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FHelper::Clear() {
// @@protoc_insertion_point(message_clear_start:FHelper)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ip_.ClearToEmpty();
  port_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FHelper::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string Ip = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_ip();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "FHelper.Ip"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 port = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* FHelper::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:FHelper)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string Ip = 1;
  if (!this->_internal_ip().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_ip().data(), static_cast<int>(this->_internal_ip().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "FHelper.Ip");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_ip(), target);
  }

  // int32 port = 2;
  if (this->_internal_port() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_port(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:FHelper)
  return target;
}

size_t FHelper::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:FHelper)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string Ip = 1;
  if (!this->_internal_ip().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_ip());
  }

  // int32 port = 2;
  if (this->_internal_port() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_port());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FHelper::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    FHelper::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FHelper::GetClassData() const { return &_class_data_; }

void FHelper::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<FHelper *>(to)->MergeFrom(
      static_cast<const FHelper &>(from));
}


void FHelper::MergeFrom(const FHelper& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:FHelper)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_ip().empty()) {
    _internal_set_ip(from._internal_ip());
  }
  if (from._internal_port() != 0) {
    _internal_set_port(from._internal_port());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FHelper::CopyFrom(const FHelper& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:FHelper)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FHelper::IsInitialized() const {
  return true;
}

void FHelper::InternalSwap(FHelper* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &ip_, lhs_arena,
      &other->ip_, rhs_arena
  );
  swap(port_, other->port_);
}

::PROTOBUF_NAMESPACE_ID::Metadata FHelper::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_helper_2eproto_getter, &descriptor_table_helper_2eproto_once,
      file_level_metadata_helper_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::FHelper* Arena::CreateMaybeMessage< ::FHelper >(Arena* arena) {
  return Arena::CreateMessageInternal< ::FHelper >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
