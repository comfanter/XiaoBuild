// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: build_progress.proto

#include "build_progress.pb.h"

#if defined(PLATFORM_WINDOWS) && PLATFORM_WINDOWS
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
constexpr FBuildProgress::FBuildProgress(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : status_(0)
  , progress_(0)
  , currentindex_(0)
  , totalcount_(0){}
struct FBuildProgressDefaultTypeInternal {
  constexpr FBuildProgressDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~FBuildProgressDefaultTypeInternal() {}
  union {
    FBuildProgress _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT FBuildProgressDefaultTypeInternal _FBuildProgress_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_build_5fprogress_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_build_5fprogress_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_build_5fprogress_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_build_5fprogress_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::FBuildProgress, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::FBuildProgress, status_),
  PROTOBUF_FIELD_OFFSET(::FBuildProgress, progress_),
  PROTOBUF_FIELD_OFFSET(::FBuildProgress, currentindex_),
  PROTOBUF_FIELD_OFFSET(::FBuildProgress, totalcount_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::FBuildProgress)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_FBuildProgress_default_instance_),
};

const char descriptor_table_protodef_build_5fprogress_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024build_progress.proto\"\\\n\016FBuildProgress"
  "\022\016\n\006Status\030\001 \001(\005\022\020\n\010Progress\030\002 \001(\002\022\024\n\014Cu"
  "rrentIndex\030\003 \001(\005\022\022\n\nTotalCount\030\004 \001(\005b\006pr"
  "oto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_build_5fprogress_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_build_5fprogress_2eproto = {
  false, false, 124, descriptor_table_protodef_build_5fprogress_2eproto, "build_progress.proto", 
  &descriptor_table_build_5fprogress_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_build_5fprogress_2eproto::offsets,
  file_level_metadata_build_5fprogress_2eproto, file_level_enum_descriptors_build_5fprogress_2eproto, file_level_service_descriptors_build_5fprogress_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_build_5fprogress_2eproto_getter() {
  return &descriptor_table_build_5fprogress_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_build_5fprogress_2eproto(&descriptor_table_build_5fprogress_2eproto);

// ===================================================================

class FBuildProgress::_Internal {
 public:
};

FBuildProgress::FBuildProgress(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:FBuildProgress)
}
FBuildProgress::FBuildProgress(const FBuildProgress& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&status_, &from.status_,
    static_cast<size_t>(reinterpret_cast<char*>(&totalcount_) -
    reinterpret_cast<char*>(&status_)) + sizeof(totalcount_));
  // @@protoc_insertion_point(copy_constructor:FBuildProgress)
}

void FBuildProgress::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&status_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&totalcount_) -
    reinterpret_cast<char*>(&status_)) + sizeof(totalcount_));
}

FBuildProgress::~FBuildProgress() {
  // @@protoc_insertion_point(destructor:FBuildProgress)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void FBuildProgress::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void FBuildProgress::ArenaDtor(void* object) {
  FBuildProgress* _this = reinterpret_cast< FBuildProgress* >(object);
  (void)_this;
}
void FBuildProgress::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void FBuildProgress::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FBuildProgress::Clear() {
// @@protoc_insertion_point(message_clear_start:FBuildProgress)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&status_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&totalcount_) -
      reinterpret_cast<char*>(&status_)) + sizeof(totalcount_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FBuildProgress::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 Status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // float Progress = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          progress_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // int32 CurrentIndex = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          currentindex_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 TotalCount = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          totalcount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* FBuildProgress::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:FBuildProgress)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 Status = 1;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_status(), target);
  }

  // float Progress = 2;
  if (!(this->_internal_progress() <= 0 && this->_internal_progress() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_progress(), target);
  }

  // int32 CurrentIndex = 3;
  if (this->_internal_currentindex() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_currentindex(), target);
  }

  // int32 TotalCount = 4;
  if (this->_internal_totalcount() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_totalcount(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:FBuildProgress)
  return target;
}

size_t FBuildProgress::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:FBuildProgress)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 Status = 1;
  if (this->_internal_status() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_status());
  }

  // float Progress = 2;
  if (!(this->_internal_progress() <= 0 && this->_internal_progress() >= 0)) {
    total_size += 1 + 4;
  }

  // int32 CurrentIndex = 3;
  if (this->_internal_currentindex() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_currentindex());
  }

  // int32 TotalCount = 4;
  if (this->_internal_totalcount() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_totalcount());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FBuildProgress::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    FBuildProgress::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FBuildProgress::GetClassData() const { return &_class_data_; }

void FBuildProgress::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<FBuildProgress *>(to)->MergeFrom(
      static_cast<const FBuildProgress &>(from));
}


void FBuildProgress::MergeFrom(const FBuildProgress& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:FBuildProgress)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_status() != 0) {
    _internal_set_status(from._internal_status());
  }
  if (!(from._internal_progress() <= 0 && from._internal_progress() >= 0)) {
    _internal_set_progress(from._internal_progress());
  }
  if (from._internal_currentindex() != 0) {
    _internal_set_currentindex(from._internal_currentindex());
  }
  if (from._internal_totalcount() != 0) {
    _internal_set_totalcount(from._internal_totalcount());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FBuildProgress::CopyFrom(const FBuildProgress& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:FBuildProgress)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FBuildProgress::IsInitialized() const {
  return true;
}

void FBuildProgress::InternalSwap(FBuildProgress* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FBuildProgress, totalcount_)
      + sizeof(FBuildProgress::totalcount_)
      - PROTOBUF_FIELD_OFFSET(FBuildProgress, status_)>(
          reinterpret_cast<char*>(&status_),
          reinterpret_cast<char*>(&other->status_));
}

::PROTOBUF_NAMESPACE_ID::Metadata FBuildProgress::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_build_5fprogress_2eproto_getter, &descriptor_table_build_5fprogress_2eproto_once,
      file_level_metadata_build_5fprogress_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::FBuildProgress* Arena::CreateMaybeMessage< ::FBuildProgress >(Arena* arena) {
  return Arena::CreateMessageInternal< ::FBuildProgress >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
