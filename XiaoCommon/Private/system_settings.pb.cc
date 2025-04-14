// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: system_settings.proto

#include "system_settings.pb.h"

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
constexpr FSystemSettings::FSystemSettings(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : harddiskminimal_(0)
  , virtualmemoryminimal_(0)
  , physicalmemory_(0)
  , cpuavailableminimal_(0)
  , helpercoreavailablepercentminimal_(0)
  , networkavamin_(0)
  , gpuavamin_(0)
  , agentserviceport_(0u)
  , webuiport_(0u)
  , coordiserviceport_(0u)
  , licenseserviceport_(0u)
  , cacheserviceport_(0u)
  , syncfreq_(0u)
  , benablehelper_(false)
  , bencypttransport_(false)
  , bforbidenstanby_(false)
  , bshowwindowsfire_(false)
  , maxcorenum_(0u)
  , maxinitiatornum_(0u)
  , maxconnum_(0u)
  , bhelperenhance_(false)
  , bscheduleclean_(false)
  , bignorearch_(false)
  , scheduletime_(0u){}
struct FSystemSettingsDefaultTypeInternal {
  constexpr FSystemSettingsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~FSystemSettingsDefaultTypeInternal() {}
  union {
    FSystemSettings _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT FSystemSettingsDefaultTypeInternal _FSystemSettings_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_system_5fsettings_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_system_5fsettings_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_system_5fsettings_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_system_5fsettings_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, harddiskminimal_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, virtualmemoryminimal_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, physicalmemory_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, cpuavailableminimal_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, helpercoreavailablepercentminimal_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, networkavamin_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, gpuavamin_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, benablehelper_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, agentserviceport_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, webuiport_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, coordiserviceport_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, licenseserviceport_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, cacheserviceport_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, syncfreq_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, bencypttransport_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, bforbidenstanby_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, bshowwindowsfire_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, bhelperenhance_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, maxcorenum_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, maxinitiatornum_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, maxconnum_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, bscheduleclean_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, scheduletime_),
  PROTOBUF_FIELD_OFFSET(::FSystemSettings, bignorearch_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::FSystemSettings)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_FSystemSettings_default_instance_),
};

const char descriptor_table_protodef_system_5fsettings_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025system_settings.proto\"\341\004\n\017FSystemSetti"
  "ngs\022\027\n\017HardDiskMinimal\030\001 \001(\002\022\034\n\024VirtualM"
  "emoryMinimal\030\002 \001(\002\022\026\n\016PhysicalMemory\030\003 \001"
  "(\002\022\033\n\023CpuAvailableMinimal\030\004 \001(\002\022)\n!Helpe"
  "rCoreAvailablePercentMinimal\030\005 \001(\002\022\025\n\rNe"
  "tworkAvaMin\030\006 \001(\002\022\021\n\tGpuAvaMin\030\007 \001(\002\022\025\n\r"
  "bEnableHelper\030\010 \001(\010\022\030\n\020AgentServicePort\030"
  "\t \001(\r\022\021\n\tWebUIPort\030\n \001(\r\022\031\n\021CoordiServic"
  "ePort\030\013 \001(\r\022\032\n\022LicenseServicePort\030\014 \001(\r\022"
  "\030\n\020CacheServicePort\030\r \001(\r\022\020\n\010SyncFreq\030\016 "
  "\001(\r\022\030\n\020bEncyptTransport\030\017 \001(\010\022\027\n\017bForbid"
  "enStanby\030\020 \001(\010\022\030\n\020bShowWindowsFire\030\021 \001(\010"
  "\022\026\n\016bHelperEnhance\030\022 \001(\010\022\022\n\nMaxCoreNum\030\023"
  " \001(\r\022\027\n\017MaxInitiatorNum\030\024 \001(\r\022\021\n\tMaxConN"
  "um\030\025 \001(\r\022\026\n\016bScheduleClean\030\026 \001(\010\022\024\n\014Sche"
  "duleTime\030\030 \001(\r\022\023\n\013bIgnoreArch\030\031 \001(\010b\006pro"
  "to3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_system_5fsettings_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_system_5fsettings_2eproto = {
  false, false, 643, descriptor_table_protodef_system_5fsettings_2eproto, "system_settings.proto", 
  &descriptor_table_system_5fsettings_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_system_5fsettings_2eproto::offsets,
  file_level_metadata_system_5fsettings_2eproto, file_level_enum_descriptors_system_5fsettings_2eproto, file_level_service_descriptors_system_5fsettings_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_system_5fsettings_2eproto_getter() {
  return &descriptor_table_system_5fsettings_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_system_5fsettings_2eproto(&descriptor_table_system_5fsettings_2eproto);

// ===================================================================

class FSystemSettings::_Internal {
 public:
};

FSystemSettings::FSystemSettings(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:FSystemSettings)
}
FSystemSettings::FSystemSettings(const FSystemSettings& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&harddiskminimal_, &from.harddiskminimal_,
    static_cast<size_t>(reinterpret_cast<char*>(&scheduletime_) -
    reinterpret_cast<char*>(&harddiskminimal_)) + sizeof(scheduletime_));
  // @@protoc_insertion_point(copy_constructor:FSystemSettings)
}

void FSystemSettings::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&harddiskminimal_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&scheduletime_) -
    reinterpret_cast<char*>(&harddiskminimal_)) + sizeof(scheduletime_));
}

FSystemSettings::~FSystemSettings() {
  // @@protoc_insertion_point(destructor:FSystemSettings)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void FSystemSettings::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void FSystemSettings::ArenaDtor(void* object) {
  FSystemSettings* _this = reinterpret_cast< FSystemSettings* >(object);
  (void)_this;
}
void FSystemSettings::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void FSystemSettings::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FSystemSettings::Clear() {
// @@protoc_insertion_point(message_clear_start:FSystemSettings)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&harddiskminimal_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&scheduletime_) -
      reinterpret_cast<char*>(&harddiskminimal_)) + sizeof(scheduletime_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FSystemSettings::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // float HardDiskMinimal = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          harddiskminimal_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float VirtualMemoryMinimal = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          virtualmemoryminimal_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float PhysicalMemory = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          physicalmemory_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float CpuAvailableMinimal = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37)) {
          cpuavailableminimal_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float HelperCoreAvailablePercentMinimal = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45)) {
          helpercoreavailablepercentminimal_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float NetworkAvaMin = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 53)) {
          networkavamin_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float GpuAvaMin = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 61)) {
          gpuavamin_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // bool bEnableHelper = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          benablehelper_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 AgentServicePort = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 72)) {
          agentserviceport_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 WebUIPort = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 80)) {
          webuiport_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 CoordiServicePort = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 88)) {
          coordiserviceport_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 LicenseServicePort = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 96)) {
          licenseserviceport_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 CacheServicePort = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 104)) {
          cacheserviceport_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 SyncFreq = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 112)) {
          syncfreq_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool bEncyptTransport = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 120)) {
          bencypttransport_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool bForbidenStanby = 16;
      case 16:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 128)) {
          bforbidenstanby_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool bShowWindowsFire = 17;
      case 17:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 136)) {
          bshowwindowsfire_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool bHelperEnhance = 18;
      case 18:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 144)) {
          bhelperenhance_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 MaxCoreNum = 19;
      case 19:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 152)) {
          maxcorenum_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 MaxInitiatorNum = 20;
      case 20:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 160)) {
          maxinitiatornum_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 MaxConNum = 21;
      case 21:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 168)) {
          maxconnum_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool bScheduleClean = 22;
      case 22:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 176)) {
          bscheduleclean_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 ScheduleTime = 24;
      case 24:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 192)) {
          scheduletime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool bIgnoreArch = 25;
      case 25:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 200)) {
          bignorearch_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* FSystemSettings::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:FSystemSettings)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float HardDiskMinimal = 1;
  if (!(this->_internal_harddiskminimal() <= 0 && this->_internal_harddiskminimal() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_harddiskminimal(), target);
  }

  // float VirtualMemoryMinimal = 2;
  if (!(this->_internal_virtualmemoryminimal() <= 0 && this->_internal_virtualmemoryminimal() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_virtualmemoryminimal(), target);
  }

  // float PhysicalMemory = 3;
  if (!(this->_internal_physicalmemory() <= 0 && this->_internal_physicalmemory() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_physicalmemory(), target);
  }

  // float CpuAvailableMinimal = 4;
  if (!(this->_internal_cpuavailableminimal() <= 0 && this->_internal_cpuavailableminimal() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(4, this->_internal_cpuavailableminimal(), target);
  }

  // float HelperCoreAvailablePercentMinimal = 5;
  if (!(this->_internal_helpercoreavailablepercentminimal() <= 0 && this->_internal_helpercoreavailablepercentminimal() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(5, this->_internal_helpercoreavailablepercentminimal(), target);
  }

  // float NetworkAvaMin = 6;
  if (!(this->_internal_networkavamin() <= 0 && this->_internal_networkavamin() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(6, this->_internal_networkavamin(), target);
  }

  // float GpuAvaMin = 7;
  if (!(this->_internal_gpuavamin() <= 0 && this->_internal_gpuavamin() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(7, this->_internal_gpuavamin(), target);
  }

  // bool bEnableHelper = 8;
  if (this->_internal_benablehelper() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(8, this->_internal_benablehelper(), target);
  }

  // uint32 AgentServicePort = 9;
  if (this->_internal_agentserviceport() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(9, this->_internal_agentserviceport(), target);
  }

  // uint32 WebUIPort = 10;
  if (this->_internal_webuiport() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(10, this->_internal_webuiport(), target);
  }

  // uint32 CoordiServicePort = 11;
  if (this->_internal_coordiserviceport() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(11, this->_internal_coordiserviceport(), target);
  }

  // uint32 LicenseServicePort = 12;
  if (this->_internal_licenseserviceport() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(12, this->_internal_licenseserviceport(), target);
  }

  // uint32 CacheServicePort = 13;
  if (this->_internal_cacheserviceport() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(13, this->_internal_cacheserviceport(), target);
  }

  // uint32 SyncFreq = 14;
  if (this->_internal_syncfreq() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(14, this->_internal_syncfreq(), target);
  }

  // bool bEncyptTransport = 15;
  if (this->_internal_bencypttransport() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(15, this->_internal_bencypttransport(), target);
  }

  // bool bForbidenStanby = 16;
  if (this->_internal_bforbidenstanby() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(16, this->_internal_bforbidenstanby(), target);
  }

  // bool bShowWindowsFire = 17;
  if (this->_internal_bshowwindowsfire() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(17, this->_internal_bshowwindowsfire(), target);
  }

  // bool bHelperEnhance = 18;
  if (this->_internal_bhelperenhance() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(18, this->_internal_bhelperenhance(), target);
  }

  // uint32 MaxCoreNum = 19;
  if (this->_internal_maxcorenum() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(19, this->_internal_maxcorenum(), target);
  }

  // uint32 MaxInitiatorNum = 20;
  if (this->_internal_maxinitiatornum() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(20, this->_internal_maxinitiatornum(), target);
  }

  // uint32 MaxConNum = 21;
  if (this->_internal_maxconnum() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(21, this->_internal_maxconnum(), target);
  }

  // bool bScheduleClean = 22;
  if (this->_internal_bscheduleclean() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(22, this->_internal_bscheduleclean(), target);
  }

  // uint32 ScheduleTime = 24;
  if (this->_internal_scheduletime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(24, this->_internal_scheduletime(), target);
  }

  // bool bIgnoreArch = 25;
  if (this->_internal_bignorearch() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(25, this->_internal_bignorearch(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:FSystemSettings)
  return target;
}

size_t FSystemSettings::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:FSystemSettings)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float HardDiskMinimal = 1;
  if (!(this->_internal_harddiskminimal() <= 0 && this->_internal_harddiskminimal() >= 0)) {
    total_size += 1 + 4;
  }

  // float VirtualMemoryMinimal = 2;
  if (!(this->_internal_virtualmemoryminimal() <= 0 && this->_internal_virtualmemoryminimal() >= 0)) {
    total_size += 1 + 4;
  }

  // float PhysicalMemory = 3;
  if (!(this->_internal_physicalmemory() <= 0 && this->_internal_physicalmemory() >= 0)) {
    total_size += 1 + 4;
  }

  // float CpuAvailableMinimal = 4;
  if (!(this->_internal_cpuavailableminimal() <= 0 && this->_internal_cpuavailableminimal() >= 0)) {
    total_size += 1 + 4;
  }

  // float HelperCoreAvailablePercentMinimal = 5;
  if (!(this->_internal_helpercoreavailablepercentminimal() <= 0 && this->_internal_helpercoreavailablepercentminimal() >= 0)) {
    total_size += 1 + 4;
  }

  // float NetworkAvaMin = 6;
  if (!(this->_internal_networkavamin() <= 0 && this->_internal_networkavamin() >= 0)) {
    total_size += 1 + 4;
  }

  // float GpuAvaMin = 7;
  if (!(this->_internal_gpuavamin() <= 0 && this->_internal_gpuavamin() >= 0)) {
    total_size += 1 + 4;
  }

  // uint32 AgentServicePort = 9;
  if (this->_internal_agentserviceport() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_agentserviceport());
  }

  // uint32 WebUIPort = 10;
  if (this->_internal_webuiport() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_webuiport());
  }

  // uint32 CoordiServicePort = 11;
  if (this->_internal_coordiserviceport() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_coordiserviceport());
  }

  // uint32 LicenseServicePort = 12;
  if (this->_internal_licenseserviceport() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_licenseserviceport());
  }

  // uint32 CacheServicePort = 13;
  if (this->_internal_cacheserviceport() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_cacheserviceport());
  }

  // uint32 SyncFreq = 14;
  if (this->_internal_syncfreq() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_syncfreq());
  }

  // bool bEnableHelper = 8;
  if (this->_internal_benablehelper() != 0) {
    total_size += 1 + 1;
  }

  // bool bEncyptTransport = 15;
  if (this->_internal_bencypttransport() != 0) {
    total_size += 1 + 1;
  }

  // bool bForbidenStanby = 16;
  if (this->_internal_bforbidenstanby() != 0) {
    total_size += 2 + 1;
  }

  // bool bShowWindowsFire = 17;
  if (this->_internal_bshowwindowsfire() != 0) {
    total_size += 2 + 1;
  }

  // uint32 MaxCoreNum = 19;
  if (this->_internal_maxcorenum() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_maxcorenum());
  }

  // uint32 MaxInitiatorNum = 20;
  if (this->_internal_maxinitiatornum() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_maxinitiatornum());
  }

  // uint32 MaxConNum = 21;
  if (this->_internal_maxconnum() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_maxconnum());
  }

  // bool bHelperEnhance = 18;
  if (this->_internal_bhelperenhance() != 0) {
    total_size += 2 + 1;
  }

  // bool bScheduleClean = 22;
  if (this->_internal_bscheduleclean() != 0) {
    total_size += 2 + 1;
  }

  // bool bIgnoreArch = 25;
  if (this->_internal_bignorearch() != 0) {
    total_size += 2 + 1;
  }

  // uint32 ScheduleTime = 24;
  if (this->_internal_scheduletime() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_scheduletime());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FSystemSettings::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    FSystemSettings::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FSystemSettings::GetClassData() const { return &_class_data_; }

void FSystemSettings::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<FSystemSettings *>(to)->MergeFrom(
      static_cast<const FSystemSettings &>(from));
}


void FSystemSettings::MergeFrom(const FSystemSettings& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:FSystemSettings)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!(from._internal_harddiskminimal() <= 0 && from._internal_harddiskminimal() >= 0)) {
    _internal_set_harddiskminimal(from._internal_harddiskminimal());
  }
  if (!(from._internal_virtualmemoryminimal() <= 0 && from._internal_virtualmemoryminimal() >= 0)) {
    _internal_set_virtualmemoryminimal(from._internal_virtualmemoryminimal());
  }
  if (!(from._internal_physicalmemory() <= 0 && from._internal_physicalmemory() >= 0)) {
    _internal_set_physicalmemory(from._internal_physicalmemory());
  }
  if (!(from._internal_cpuavailableminimal() <= 0 && from._internal_cpuavailableminimal() >= 0)) {
    _internal_set_cpuavailableminimal(from._internal_cpuavailableminimal());
  }
  if (!(from._internal_helpercoreavailablepercentminimal() <= 0 && from._internal_helpercoreavailablepercentminimal() >= 0)) {
    _internal_set_helpercoreavailablepercentminimal(from._internal_helpercoreavailablepercentminimal());
  }
  if (!(from._internal_networkavamin() <= 0 && from._internal_networkavamin() >= 0)) {
    _internal_set_networkavamin(from._internal_networkavamin());
  }
  if (!(from._internal_gpuavamin() <= 0 && from._internal_gpuavamin() >= 0)) {
    _internal_set_gpuavamin(from._internal_gpuavamin());
  }
  if (from._internal_agentserviceport() != 0) {
    _internal_set_agentserviceport(from._internal_agentserviceport());
  }
  if (from._internal_webuiport() != 0) {
    _internal_set_webuiport(from._internal_webuiport());
  }
  if (from._internal_coordiserviceport() != 0) {
    _internal_set_coordiserviceport(from._internal_coordiserviceport());
  }
  if (from._internal_licenseserviceport() != 0) {
    _internal_set_licenseserviceport(from._internal_licenseserviceport());
  }
  if (from._internal_cacheserviceport() != 0) {
    _internal_set_cacheserviceport(from._internal_cacheserviceport());
  }
  if (from._internal_syncfreq() != 0) {
    _internal_set_syncfreq(from._internal_syncfreq());
  }
  if (from._internal_benablehelper() != 0) {
    _internal_set_benablehelper(from._internal_benablehelper());
  }
  if (from._internal_bencypttransport() != 0) {
    _internal_set_bencypttransport(from._internal_bencypttransport());
  }
  if (from._internal_bforbidenstanby() != 0) {
    _internal_set_bforbidenstanby(from._internal_bforbidenstanby());
  }
  if (from._internal_bshowwindowsfire() != 0) {
    _internal_set_bshowwindowsfire(from._internal_bshowwindowsfire());
  }
  if (from._internal_maxcorenum() != 0) {
    _internal_set_maxcorenum(from._internal_maxcorenum());
  }
  if (from._internal_maxinitiatornum() != 0) {
    _internal_set_maxinitiatornum(from._internal_maxinitiatornum());
  }
  if (from._internal_maxconnum() != 0) {
    _internal_set_maxconnum(from._internal_maxconnum());
  }
  if (from._internal_bhelperenhance() != 0) {
    _internal_set_bhelperenhance(from._internal_bhelperenhance());
  }
  if (from._internal_bscheduleclean() != 0) {
    _internal_set_bscheduleclean(from._internal_bscheduleclean());
  }
  if (from._internal_bignorearch() != 0) {
    _internal_set_bignorearch(from._internal_bignorearch());
  }
  if (from._internal_scheduletime() != 0) {
    _internal_set_scheduletime(from._internal_scheduletime());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FSystemSettings::CopyFrom(const FSystemSettings& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:FSystemSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FSystemSettings::IsInitialized() const {
  return true;
}

void FSystemSettings::InternalSwap(FSystemSettings* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FSystemSettings, scheduletime_)
      + sizeof(FSystemSettings::scheduletime_)
      - PROTOBUF_FIELD_OFFSET(FSystemSettings, harddiskminimal_)>(
          reinterpret_cast<char*>(&harddiskminimal_),
          reinterpret_cast<char*>(&other->harddiskminimal_));
}

::PROTOBUF_NAMESPACE_ID::Metadata FSystemSettings::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_system_5fsettings_2eproto_getter, &descriptor_table_system_5fsettings_2eproto_once,
      file_level_metadata_system_5fsettings_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::FSystemSettings* Arena::CreateMaybeMessage< ::FSystemSettings >(Arena* arena) {
  return Arena::CreateMessageInternal< ::FSystemSettings >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
