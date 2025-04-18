// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: files_buffer.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_files_5fbuffer_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_files_5fbuffer_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_files_5fbuffer_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_files_5fbuffer_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_files_5fbuffer_2eproto;
class FFilesBuffer;
struct FFilesBufferDefaultTypeInternal;
extern FFilesBufferDefaultTypeInternal _FFilesBuffer_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::FFilesBuffer* Arena::CreateMaybeMessage<::FFilesBuffer>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class FFilesBuffer final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:FFilesBuffer) */ {
 public:
  inline FFilesBuffer() : FFilesBuffer(nullptr) {}
  ~FFilesBuffer() override;
  explicit constexpr FFilesBuffer(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FFilesBuffer(const FFilesBuffer& from);
  FFilesBuffer(FFilesBuffer&& from) noexcept
    : FFilesBuffer() {
    *this = ::std::move(from);
  }

  inline FFilesBuffer& operator=(const FFilesBuffer& from) {
    CopyFrom(from);
    return *this;
  }
  inline FFilesBuffer& operator=(FFilesBuffer&& from) noexcept {
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
  static const FFilesBuffer& default_instance() {
    return *internal_default_instance();
  }
  static inline const FFilesBuffer* internal_default_instance() {
    return reinterpret_cast<const FFilesBuffer*>(
               &_FFilesBuffer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FFilesBuffer& a, FFilesBuffer& b) {
    a.Swap(&b);
  }
  inline void Swap(FFilesBuffer* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FFilesBuffer* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FFilesBuffer* New() const final {
    return new FFilesBuffer();
  }

  FFilesBuffer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FFilesBuffer>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const FFilesBuffer& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const FFilesBuffer& from);
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
  void InternalSwap(FFilesBuffer* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "FFilesBuffer";
  }
  protected:
  explicit FFilesBuffer(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kFilesFieldNumber = 1,
    kBuffersFieldNumber = 2,
  };
  // repeated string Files = 1;
  int files_size() const;
  private:
  int _internal_files_size() const;
  public:
  void clear_files();
  const std::string& files(int index) const;
  std::string* mutable_files(int index);
  void set_files(int index, const std::string& value);
  void set_files(int index, std::string&& value);
  void set_files(int index, const char* value);
  void set_files(int index, const char* value, size_t size);
  std::string* add_files();
  void add_files(const std::string& value);
  void add_files(std::string&& value);
  void add_files(const char* value);
  void add_files(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& files() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_files();
  private:
  const std::string& _internal_files(int index) const;
  std::string* _internal_add_files();
  public:

  // repeated string Buffers = 2;
  int buffers_size() const;
  private:
  int _internal_buffers_size() const;
  public:
  void clear_buffers();
  const std::string& buffers(int index) const;
  std::string* mutable_buffers(int index);
  void set_buffers(int index, const std::string& value);
  void set_buffers(int index, std::string&& value);
  void set_buffers(int index, const char* value);
  void set_buffers(int index, const char* value, size_t size);
  std::string* add_buffers();
  void add_buffers(const std::string& value);
  void add_buffers(std::string&& value);
  void add_buffers(const char* value);
  void add_buffers(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& buffers() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_buffers();
  private:
  const std::string& _internal_buffers(int index) const;
  std::string* _internal_add_buffers();
  public:

  // @@protoc_insertion_point(class_scope:FFilesBuffer)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> files_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> buffers_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_files_5fbuffer_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FFilesBuffer

// repeated string Files = 1;
inline int FFilesBuffer::_internal_files_size() const {
  return files_.size();
}
inline int FFilesBuffer::files_size() const {
  return _internal_files_size();
}
inline void FFilesBuffer::clear_files() {
  files_.Clear();
}
inline std::string* FFilesBuffer::add_files() {
  std::string* _s = _internal_add_files();
  // @@protoc_insertion_point(field_add_mutable:FFilesBuffer.Files)
  return _s;
}
inline const std::string& FFilesBuffer::_internal_files(int index) const {
  return files_.Get(index);
}
inline const std::string& FFilesBuffer::files(int index) const {
  // @@protoc_insertion_point(field_get:FFilesBuffer.Files)
  return _internal_files(index);
}
inline std::string* FFilesBuffer::mutable_files(int index) {
  // @@protoc_insertion_point(field_mutable:FFilesBuffer.Files)
  return files_.Mutable(index);
}
inline void FFilesBuffer::set_files(int index, const std::string& value) {
  files_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:FFilesBuffer.Files)
}
inline void FFilesBuffer::set_files(int index, std::string&& value) {
  files_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:FFilesBuffer.Files)
}
inline void FFilesBuffer::set_files(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  files_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:FFilesBuffer.Files)
}
inline void FFilesBuffer::set_files(int index, const char* value, size_t size) {
  files_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:FFilesBuffer.Files)
}
inline std::string* FFilesBuffer::_internal_add_files() {
  return files_.Add();
}
inline void FFilesBuffer::add_files(const std::string& value) {
  files_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:FFilesBuffer.Files)
}
inline void FFilesBuffer::add_files(std::string&& value) {
  files_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:FFilesBuffer.Files)
}
inline void FFilesBuffer::add_files(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  files_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:FFilesBuffer.Files)
}
inline void FFilesBuffer::add_files(const char* value, size_t size) {
  files_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:FFilesBuffer.Files)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
FFilesBuffer::files() const {
  // @@protoc_insertion_point(field_list:FFilesBuffer.Files)
  return files_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
FFilesBuffer::mutable_files() {
  // @@protoc_insertion_point(field_mutable_list:FFilesBuffer.Files)
  return &files_;
}

// repeated string Buffers = 2;
inline int FFilesBuffer::_internal_buffers_size() const {
  return buffers_.size();
}
inline int FFilesBuffer::buffers_size() const {
  return _internal_buffers_size();
}
inline void FFilesBuffer::clear_buffers() {
  buffers_.Clear();
}
inline std::string* FFilesBuffer::add_buffers() {
  std::string* _s = _internal_add_buffers();
  // @@protoc_insertion_point(field_add_mutable:FFilesBuffer.Buffers)
  return _s;
}
inline const std::string& FFilesBuffer::_internal_buffers(int index) const {
  return buffers_.Get(index);
}
inline const std::string& FFilesBuffer::buffers(int index) const {
  // @@protoc_insertion_point(field_get:FFilesBuffer.Buffers)
  return _internal_buffers(index);
}
inline std::string* FFilesBuffer::mutable_buffers(int index) {
  // @@protoc_insertion_point(field_mutable:FFilesBuffer.Buffers)
  return buffers_.Mutable(index);
}
inline void FFilesBuffer::set_buffers(int index, const std::string& value) {
  buffers_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:FFilesBuffer.Buffers)
}
inline void FFilesBuffer::set_buffers(int index, std::string&& value) {
  buffers_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:FFilesBuffer.Buffers)
}
inline void FFilesBuffer::set_buffers(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  buffers_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:FFilesBuffer.Buffers)
}
inline void FFilesBuffer::set_buffers(int index, const char* value, size_t size) {
  buffers_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:FFilesBuffer.Buffers)
}
inline std::string* FFilesBuffer::_internal_add_buffers() {
  return buffers_.Add();
}
inline void FFilesBuffer::add_buffers(const std::string& value) {
  buffers_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:FFilesBuffer.Buffers)
}
inline void FFilesBuffer::add_buffers(std::string&& value) {
  buffers_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:FFilesBuffer.Buffers)
}
inline void FFilesBuffer::add_buffers(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  buffers_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:FFilesBuffer.Buffers)
}
inline void FFilesBuffer::add_buffers(const char* value, size_t size) {
  buffers_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:FFilesBuffer.Buffers)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
FFilesBuffer::buffers() const {
  // @@protoc_insertion_point(field_list:FFilesBuffer.Buffers)
  return buffers_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
FFilesBuffer::mutable_buffers() {
  // @@protoc_insertion_point(field_mutable_list:FFilesBuffer.Buffers)
  return &buffers_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_files_5fbuffer_2eproto
