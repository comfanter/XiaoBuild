// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: helper.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_helper_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_helper_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3018000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3018000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_helper_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_helper_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_helper_2eproto;
class FHelper;
struct FHelperDefaultTypeInternal;
extern FHelperDefaultTypeInternal _FHelper_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::FHelper* Arena::CreateMaybeMessage<::FHelper>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class FHelper final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:FHelper) */ {
 public:
  inline FHelper() : FHelper(nullptr) {}
  ~FHelper() override;
  explicit constexpr FHelper(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FHelper(const FHelper& from);
  FHelper(FHelper&& from) noexcept
    : FHelper() {
    *this = ::std::move(from);
  }

  inline FHelper& operator=(const FHelper& from) {
    CopyFrom(from);
    return *this;
  }
  inline FHelper& operator=(FHelper&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const FHelper& default_instance() {
    return *internal_default_instance();
  }
  static inline const FHelper* internal_default_instance() {
    return reinterpret_cast<const FHelper*>(
               &_FHelper_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FHelper& a, FHelper& b) {
    a.Swap(&b);
  }
  inline void Swap(FHelper* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FHelper* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FHelper* New() const final {
    return new FHelper();
  }

  FHelper* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FHelper>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const FHelper& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const FHelper& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FHelper* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "FHelper";
  }
  protected:
  explicit FHelper(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIpFieldNumber = 1,
    kPortFieldNumber = 2,
  };
  // string Ip = 1;
  void clear_ip();
  const std::string& ip() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_ip(ArgT0&& arg0, ArgT... args);
  std::string* mutable_ip();
  PROTOBUF_MUST_USE_RESULT std::string* release_ip();
  void set_allocated_ip(std::string* ip);
  private:
  const std::string& _internal_ip() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_ip(const std::string& value);
  std::string* _internal_mutable_ip();
  public:

  // int32 port = 2;
  void clear_port();
  ::PROTOBUF_NAMESPACE_ID::int32 port() const;
  void set_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_port() const;
  void _internal_set_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:FHelper)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ip_;
  ::PROTOBUF_NAMESPACE_ID::int32 port_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_helper_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FHelper

// string Ip = 1;
inline void FHelper::clear_ip() {
  ip_.ClearToEmpty();
}
inline const std::string& FHelper::ip() const {
  // @@protoc_insertion_point(field_get:FHelper.Ip)
  return _internal_ip();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FHelper::set_ip(ArgT0&& arg0, ArgT... args) {
 
 ip_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:FHelper.Ip)
}
inline std::string* FHelper::mutable_ip() {
  std::string* _s = _internal_mutable_ip();
  // @@protoc_insertion_point(field_mutable:FHelper.Ip)
  return _s;
}
inline const std::string& FHelper::_internal_ip() const {
  return ip_.Get();
}
inline void FHelper::_internal_set_ip(const std::string& value) {
  
  ip_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FHelper::_internal_mutable_ip() {
  
  return ip_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FHelper::release_ip() {
  // @@protoc_insertion_point(field_release:FHelper.Ip)
  return ip_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FHelper::set_allocated_ip(std::string* ip) {
  if (ip != nullptr) {
    
  } else {
    
  }
  ip_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ip,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:FHelper.Ip)
}

// int32 port = 2;
inline void FHelper::clear_port() {
  port_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 FHelper::_internal_port() const {
  return port_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 FHelper::port() const {
  // @@protoc_insertion_point(field_get:FHelper.port)
  return _internal_port();
}
inline void FHelper::_internal_set_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  port_ = value;
}
inline void FHelper::set_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_port(value);
  // @@protoc_insertion_point(field_set:FHelper.port)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_helper_2eproto
