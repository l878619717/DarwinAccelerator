// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: expinfo.proto

#ifndef PROTOBUF_expinfo_2eproto__INCLUDED
#define PROTOBUF_expinfo_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_expinfo_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsReqInfoImpl();
void InitDefaultsReqInfo();
void InitDefaultsRspInfo_ExpParamImpl();
void InitDefaultsRspInfo_ExpParam();
void InitDefaultsRspInfo_ExpLayerInfoImpl();
void InitDefaultsRspInfo_ExpLayerInfo();
void InitDefaultsRspInfoImpl();
void InitDefaultsRspInfo();
inline void InitDefaults() {
  InitDefaultsReqInfo();
  InitDefaultsRspInfo_ExpParam();
  InitDefaultsRspInfo_ExpLayerInfo();
  InitDefaultsRspInfo();
}
}  // namespace protobuf_expinfo_2eproto
namespace DarwinProto {
class ReqInfo;
class ReqInfoDefaultTypeInternal;
extern ReqInfoDefaultTypeInternal _ReqInfo_default_instance_;
class RspInfo;
class RspInfoDefaultTypeInternal;
extern RspInfoDefaultTypeInternal _RspInfo_default_instance_;
class RspInfo_ExpLayerInfo;
class RspInfo_ExpLayerInfoDefaultTypeInternal;
extern RspInfo_ExpLayerInfoDefaultTypeInternal _RspInfo_ExpLayerInfo_default_instance_;
class RspInfo_ExpParam;
class RspInfo_ExpParamDefaultTypeInternal;
extern RspInfo_ExpParamDefaultTypeInternal _RspInfo_ExpParam_default_instance_;
}  // namespace DarwinProto
namespace DarwinProto {

// ===================================================================

class ReqInfo : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:DarwinProto.ReqInfo) */ {
 public:
  ReqInfo();
  virtual ~ReqInfo();

  ReqInfo(const ReqInfo& from);

  inline ReqInfo& operator=(const ReqInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ReqInfo(ReqInfo&& from) noexcept
    : ReqInfo() {
    *this = ::std::move(from);
  }

  inline ReqInfo& operator=(ReqInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ReqInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ReqInfo* internal_default_instance() {
    return reinterpret_cast<const ReqInfo*>(
               &_ReqInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ReqInfo* other);
  friend void swap(ReqInfo& a, ReqInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ReqInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  ReqInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ReqInfo& from);
  void MergeFrom(const ReqInfo& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ReqInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes sguid = 2;
  bool has_sguid() const;
  void clear_sguid();
  static const int kSguidFieldNumber = 2;
  const ::std::string& sguid() const;
  void set_sguid(const ::std::string& value);
  #if LANG_CXX11
  void set_sguid(::std::string&& value);
  #endif
  void set_sguid(const char* value);
  void set_sguid(const void* value, size_t size);
  ::std::string* mutable_sguid();
  ::std::string* release_sguid();
  void set_allocated_sguid(::std::string* sguid);

  // optional uint32 pos_id = 1;
  bool has_pos_id() const;
  void clear_pos_id();
  static const int kPosIdFieldNumber = 1;
  ::google::protobuf::uint32 pos_id() const;
  void set_pos_id(::google::protobuf::uint32 value);

  // optional uint32 layers = 3;
  bool has_layers() const;
  void clear_layers();
  static const int kLayersFieldNumber = 3;
  ::google::protobuf::uint32 layers() const;
  void set_layers(::google::protobuf::uint32 value);

  // optional uint32 orth = 4 [default = 1];
  bool has_orth() const;
  void clear_orth();
  static const int kOrthFieldNumber = 4;
  ::google::protobuf::uint32 orth() const;
  void set_orth(::google::protobuf::uint32 value);

  // optional uint32 shuffle = 5 [default = 1];
  bool has_shuffle() const;
  void clear_shuffle();
  static const int kShuffleFieldNumber = 5;
  ::google::protobuf::uint32 shuffle() const;
  void set_shuffle(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:DarwinProto.ReqInfo)
 private:
  void set_has_pos_id();
  void clear_has_pos_id();
  void set_has_sguid();
  void clear_has_sguid();
  void set_has_layers();
  void clear_has_layers();
  void set_has_orth();
  void clear_has_orth();
  void set_has_shuffle();
  void clear_has_shuffle();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr sguid_;
  ::google::protobuf::uint32 pos_id_;
  ::google::protobuf::uint32 layers_;
  ::google::protobuf::uint32 orth_;
  ::google::protobuf::uint32 shuffle_;
  friend struct ::protobuf_expinfo_2eproto::TableStruct;
  friend void ::protobuf_expinfo_2eproto::InitDefaultsReqInfoImpl();
};
// -------------------------------------------------------------------

class RspInfo_ExpParam : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:DarwinProto.RspInfo.ExpParam) */ {
 public:
  RspInfo_ExpParam();
  virtual ~RspInfo_ExpParam();

  RspInfo_ExpParam(const RspInfo_ExpParam& from);

  inline RspInfo_ExpParam& operator=(const RspInfo_ExpParam& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RspInfo_ExpParam(RspInfo_ExpParam&& from) noexcept
    : RspInfo_ExpParam() {
    *this = ::std::move(from);
  }

  inline RspInfo_ExpParam& operator=(RspInfo_ExpParam&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const RspInfo_ExpParam& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RspInfo_ExpParam* internal_default_instance() {
    return reinterpret_cast<const RspInfo_ExpParam*>(
               &_RspInfo_ExpParam_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(RspInfo_ExpParam* other);
  friend void swap(RspInfo_ExpParam& a, RspInfo_ExpParam& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RspInfo_ExpParam* New() const PROTOBUF_FINAL { return New(NULL); }

  RspInfo_ExpParam* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const RspInfo_ExpParam& from);
  void MergeFrom(const RspInfo_ExpParam& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(RspInfo_ExpParam* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes skey = 1;
  bool has_skey() const;
  void clear_skey();
  static const int kSkeyFieldNumber = 1;
  const ::std::string& skey() const;
  void set_skey(const ::std::string& value);
  #if LANG_CXX11
  void set_skey(::std::string&& value);
  #endif
  void set_skey(const char* value);
  void set_skey(const void* value, size_t size);
  ::std::string* mutable_skey();
  ::std::string* release_skey();
  void set_allocated_skey(::std::string* skey);

  // optional bytes sval = 2;
  bool has_sval() const;
  void clear_sval();
  static const int kSvalFieldNumber = 2;
  const ::std::string& sval() const;
  void set_sval(const ::std::string& value);
  #if LANG_CXX11
  void set_sval(::std::string&& value);
  #endif
  void set_sval(const char* value);
  void set_sval(const void* value, size_t size);
  ::std::string* mutable_sval();
  ::std::string* release_sval();
  void set_allocated_sval(::std::string* sval);

  // @@protoc_insertion_point(class_scope:DarwinProto.RspInfo.ExpParam)
 private:
  void set_has_skey();
  void clear_has_skey();
  void set_has_sval();
  void clear_has_sval();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr skey_;
  ::google::protobuf::internal::ArenaStringPtr sval_;
  friend struct ::protobuf_expinfo_2eproto::TableStruct;
  friend void ::protobuf_expinfo_2eproto::InitDefaultsRspInfo_ExpParamImpl();
};
// -------------------------------------------------------------------

class RspInfo_ExpLayerInfo : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:DarwinProto.RspInfo.ExpLayerInfo) */ {
 public:
  RspInfo_ExpLayerInfo();
  virtual ~RspInfo_ExpLayerInfo();

  RspInfo_ExpLayerInfo(const RspInfo_ExpLayerInfo& from);

  inline RspInfo_ExpLayerInfo& operator=(const RspInfo_ExpLayerInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RspInfo_ExpLayerInfo(RspInfo_ExpLayerInfo&& from) noexcept
    : RspInfo_ExpLayerInfo() {
    *this = ::std::move(from);
  }

  inline RspInfo_ExpLayerInfo& operator=(RspInfo_ExpLayerInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const RspInfo_ExpLayerInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RspInfo_ExpLayerInfo* internal_default_instance() {
    return reinterpret_cast<const RspInfo_ExpLayerInfo*>(
               &_RspInfo_ExpLayerInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(RspInfo_ExpLayerInfo* other);
  friend void swap(RspInfo_ExpLayerInfo& a, RspInfo_ExpLayerInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RspInfo_ExpLayerInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  RspInfo_ExpLayerInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const RspInfo_ExpLayerInfo& from);
  void MergeFrom(const RspInfo_ExpLayerInfo& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(RspInfo_ExpLayerInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .DarwinProto.RspInfo.ExpParam exp_param = 3;
  int exp_param_size() const;
  void clear_exp_param();
  static const int kExpParamFieldNumber = 3;
  const ::DarwinProto::RspInfo_ExpParam& exp_param(int index) const;
  ::DarwinProto::RspInfo_ExpParam* mutable_exp_param(int index);
  ::DarwinProto::RspInfo_ExpParam* add_exp_param();
  ::google::protobuf::RepeatedPtrField< ::DarwinProto::RspInfo_ExpParam >*
      mutable_exp_param();
  const ::google::protobuf::RepeatedPtrField< ::DarwinProto::RspInfo_ExpParam >&
      exp_param() const;

  // optional uint32 exp_layer = 1;
  bool has_exp_layer() const;
  void clear_exp_layer();
  static const int kExpLayerFieldNumber = 1;
  ::google::protobuf::uint32 exp_layer() const;
  void set_exp_layer(::google::protobuf::uint32 value);

  // optional uint32 exp_id = 2 [default = 0];
  bool has_exp_id() const;
  void clear_exp_id();
  static const int kExpIdFieldNumber = 2;
  ::google::protobuf::uint32 exp_id() const;
  void set_exp_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:DarwinProto.RspInfo.ExpLayerInfo)
 private:
  void set_has_exp_layer();
  void clear_has_exp_layer();
  void set_has_exp_id();
  void clear_has_exp_id();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::DarwinProto::RspInfo_ExpParam > exp_param_;
  ::google::protobuf::uint32 exp_layer_;
  ::google::protobuf::uint32 exp_id_;
  friend struct ::protobuf_expinfo_2eproto::TableStruct;
  friend void ::protobuf_expinfo_2eproto::InitDefaultsRspInfo_ExpLayerInfoImpl();
};
// -------------------------------------------------------------------

class RspInfo : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:DarwinProto.RspInfo) */ {
 public:
  RspInfo();
  virtual ~RspInfo();

  RspInfo(const RspInfo& from);

  inline RspInfo& operator=(const RspInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RspInfo(RspInfo&& from) noexcept
    : RspInfo() {
    *this = ::std::move(from);
  }

  inline RspInfo& operator=(RspInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const RspInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RspInfo* internal_default_instance() {
    return reinterpret_cast<const RspInfo*>(
               &_RspInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(RspInfo* other);
  friend void swap(RspInfo& a, RspInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RspInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  RspInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const RspInfo& from);
  void MergeFrom(const RspInfo& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(RspInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef RspInfo_ExpParam ExpParam;
  typedef RspInfo_ExpLayerInfo ExpLayerInfo;

  // accessors -------------------------------------------------------

  // repeated .DarwinProto.RspInfo.ExpLayerInfo exp_info = 1;
  int exp_info_size() const;
  void clear_exp_info();
  static const int kExpInfoFieldNumber = 1;
  const ::DarwinProto::RspInfo_ExpLayerInfo& exp_info(int index) const;
  ::DarwinProto::RspInfo_ExpLayerInfo* mutable_exp_info(int index);
  ::DarwinProto::RspInfo_ExpLayerInfo* add_exp_info();
  ::google::protobuf::RepeatedPtrField< ::DarwinProto::RspInfo_ExpLayerInfo >*
      mutable_exp_info();
  const ::google::protobuf::RepeatedPtrField< ::DarwinProto::RspInfo_ExpLayerInfo >&
      exp_info() const;

  // @@protoc_insertion_point(class_scope:DarwinProto.RspInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::DarwinProto::RspInfo_ExpLayerInfo > exp_info_;
  friend struct ::protobuf_expinfo_2eproto::TableStruct;
  friend void ::protobuf_expinfo_2eproto::InitDefaultsRspInfoImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ReqInfo

// optional uint32 pos_id = 1;
inline bool ReqInfo::has_pos_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ReqInfo::set_has_pos_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ReqInfo::clear_has_pos_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ReqInfo::clear_pos_id() {
  pos_id_ = 0u;
  clear_has_pos_id();
}
inline ::google::protobuf::uint32 ReqInfo::pos_id() const {
  // @@protoc_insertion_point(field_get:DarwinProto.ReqInfo.pos_id)
  return pos_id_;
}
inline void ReqInfo::set_pos_id(::google::protobuf::uint32 value) {
  set_has_pos_id();
  pos_id_ = value;
  // @@protoc_insertion_point(field_set:DarwinProto.ReqInfo.pos_id)
}

// optional bytes sguid = 2;
inline bool ReqInfo::has_sguid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ReqInfo::set_has_sguid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ReqInfo::clear_has_sguid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ReqInfo::clear_sguid() {
  sguid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_sguid();
}
inline const ::std::string& ReqInfo::sguid() const {
  // @@protoc_insertion_point(field_get:DarwinProto.ReqInfo.sguid)
  return sguid_.GetNoArena();
}
inline void ReqInfo::set_sguid(const ::std::string& value) {
  set_has_sguid();
  sguid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DarwinProto.ReqInfo.sguid)
}
#if LANG_CXX11
inline void ReqInfo::set_sguid(::std::string&& value) {
  set_has_sguid();
  sguid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DarwinProto.ReqInfo.sguid)
}
#endif
inline void ReqInfo::set_sguid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_sguid();
  sguid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DarwinProto.ReqInfo.sguid)
}
inline void ReqInfo::set_sguid(const void* value, size_t size) {
  set_has_sguid();
  sguid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DarwinProto.ReqInfo.sguid)
}
inline ::std::string* ReqInfo::mutable_sguid() {
  set_has_sguid();
  // @@protoc_insertion_point(field_mutable:DarwinProto.ReqInfo.sguid)
  return sguid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ReqInfo::release_sguid() {
  // @@protoc_insertion_point(field_release:DarwinProto.ReqInfo.sguid)
  clear_has_sguid();
  return sguid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ReqInfo::set_allocated_sguid(::std::string* sguid) {
  if (sguid != NULL) {
    set_has_sguid();
  } else {
    clear_has_sguid();
  }
  sguid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sguid);
  // @@protoc_insertion_point(field_set_allocated:DarwinProto.ReqInfo.sguid)
}

// optional uint32 layers = 3;
inline bool ReqInfo::has_layers() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ReqInfo::set_has_layers() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ReqInfo::clear_has_layers() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ReqInfo::clear_layers() {
  layers_ = 0u;
  clear_has_layers();
}
inline ::google::protobuf::uint32 ReqInfo::layers() const {
  // @@protoc_insertion_point(field_get:DarwinProto.ReqInfo.layers)
  return layers_;
}
inline void ReqInfo::set_layers(::google::protobuf::uint32 value) {
  set_has_layers();
  layers_ = value;
  // @@protoc_insertion_point(field_set:DarwinProto.ReqInfo.layers)
}

// optional uint32 orth = 4 [default = 1];
inline bool ReqInfo::has_orth() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ReqInfo::set_has_orth() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ReqInfo::clear_has_orth() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ReqInfo::clear_orth() {
  orth_ = 1u;
  clear_has_orth();
}
inline ::google::protobuf::uint32 ReqInfo::orth() const {
  // @@protoc_insertion_point(field_get:DarwinProto.ReqInfo.orth)
  return orth_;
}
inline void ReqInfo::set_orth(::google::protobuf::uint32 value) {
  set_has_orth();
  orth_ = value;
  // @@protoc_insertion_point(field_set:DarwinProto.ReqInfo.orth)
}

// optional uint32 shuffle = 5 [default = 1];
inline bool ReqInfo::has_shuffle() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ReqInfo::set_has_shuffle() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ReqInfo::clear_has_shuffle() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ReqInfo::clear_shuffle() {
  shuffle_ = 1u;
  clear_has_shuffle();
}
inline ::google::protobuf::uint32 ReqInfo::shuffle() const {
  // @@protoc_insertion_point(field_get:DarwinProto.ReqInfo.shuffle)
  return shuffle_;
}
inline void ReqInfo::set_shuffle(::google::protobuf::uint32 value) {
  set_has_shuffle();
  shuffle_ = value;
  // @@protoc_insertion_point(field_set:DarwinProto.ReqInfo.shuffle)
}

// -------------------------------------------------------------------

// RspInfo_ExpParam

// optional bytes skey = 1;
inline bool RspInfo_ExpParam::has_skey() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RspInfo_ExpParam::set_has_skey() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RspInfo_ExpParam::clear_has_skey() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RspInfo_ExpParam::clear_skey() {
  skey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_skey();
}
inline const ::std::string& RspInfo_ExpParam::skey() const {
  // @@protoc_insertion_point(field_get:DarwinProto.RspInfo.ExpParam.skey)
  return skey_.GetNoArena();
}
inline void RspInfo_ExpParam::set_skey(const ::std::string& value) {
  set_has_skey();
  skey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DarwinProto.RspInfo.ExpParam.skey)
}
#if LANG_CXX11
inline void RspInfo_ExpParam::set_skey(::std::string&& value) {
  set_has_skey();
  skey_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DarwinProto.RspInfo.ExpParam.skey)
}
#endif
inline void RspInfo_ExpParam::set_skey(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_skey();
  skey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DarwinProto.RspInfo.ExpParam.skey)
}
inline void RspInfo_ExpParam::set_skey(const void* value, size_t size) {
  set_has_skey();
  skey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DarwinProto.RspInfo.ExpParam.skey)
}
inline ::std::string* RspInfo_ExpParam::mutable_skey() {
  set_has_skey();
  // @@protoc_insertion_point(field_mutable:DarwinProto.RspInfo.ExpParam.skey)
  return skey_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RspInfo_ExpParam::release_skey() {
  // @@protoc_insertion_point(field_release:DarwinProto.RspInfo.ExpParam.skey)
  clear_has_skey();
  return skey_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RspInfo_ExpParam::set_allocated_skey(::std::string* skey) {
  if (skey != NULL) {
    set_has_skey();
  } else {
    clear_has_skey();
  }
  skey_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), skey);
  // @@protoc_insertion_point(field_set_allocated:DarwinProto.RspInfo.ExpParam.skey)
}

// optional bytes sval = 2;
inline bool RspInfo_ExpParam::has_sval() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RspInfo_ExpParam::set_has_sval() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RspInfo_ExpParam::clear_has_sval() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RspInfo_ExpParam::clear_sval() {
  sval_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_sval();
}
inline const ::std::string& RspInfo_ExpParam::sval() const {
  // @@protoc_insertion_point(field_get:DarwinProto.RspInfo.ExpParam.sval)
  return sval_.GetNoArena();
}
inline void RspInfo_ExpParam::set_sval(const ::std::string& value) {
  set_has_sval();
  sval_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DarwinProto.RspInfo.ExpParam.sval)
}
#if LANG_CXX11
inline void RspInfo_ExpParam::set_sval(::std::string&& value) {
  set_has_sval();
  sval_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DarwinProto.RspInfo.ExpParam.sval)
}
#endif
inline void RspInfo_ExpParam::set_sval(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_sval();
  sval_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DarwinProto.RspInfo.ExpParam.sval)
}
inline void RspInfo_ExpParam::set_sval(const void* value, size_t size) {
  set_has_sval();
  sval_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DarwinProto.RspInfo.ExpParam.sval)
}
inline ::std::string* RspInfo_ExpParam::mutable_sval() {
  set_has_sval();
  // @@protoc_insertion_point(field_mutable:DarwinProto.RspInfo.ExpParam.sval)
  return sval_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RspInfo_ExpParam::release_sval() {
  // @@protoc_insertion_point(field_release:DarwinProto.RspInfo.ExpParam.sval)
  clear_has_sval();
  return sval_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RspInfo_ExpParam::set_allocated_sval(::std::string* sval) {
  if (sval != NULL) {
    set_has_sval();
  } else {
    clear_has_sval();
  }
  sval_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sval);
  // @@protoc_insertion_point(field_set_allocated:DarwinProto.RspInfo.ExpParam.sval)
}

// -------------------------------------------------------------------

// RspInfo_ExpLayerInfo

// optional uint32 exp_layer = 1;
inline bool RspInfo_ExpLayerInfo::has_exp_layer() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RspInfo_ExpLayerInfo::set_has_exp_layer() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RspInfo_ExpLayerInfo::clear_has_exp_layer() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RspInfo_ExpLayerInfo::clear_exp_layer() {
  exp_layer_ = 0u;
  clear_has_exp_layer();
}
inline ::google::protobuf::uint32 RspInfo_ExpLayerInfo::exp_layer() const {
  // @@protoc_insertion_point(field_get:DarwinProto.RspInfo.ExpLayerInfo.exp_layer)
  return exp_layer_;
}
inline void RspInfo_ExpLayerInfo::set_exp_layer(::google::protobuf::uint32 value) {
  set_has_exp_layer();
  exp_layer_ = value;
  // @@protoc_insertion_point(field_set:DarwinProto.RspInfo.ExpLayerInfo.exp_layer)
}

// optional uint32 exp_id = 2 [default = 0];
inline bool RspInfo_ExpLayerInfo::has_exp_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RspInfo_ExpLayerInfo::set_has_exp_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RspInfo_ExpLayerInfo::clear_has_exp_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RspInfo_ExpLayerInfo::clear_exp_id() {
  exp_id_ = 0u;
  clear_has_exp_id();
}
inline ::google::protobuf::uint32 RspInfo_ExpLayerInfo::exp_id() const {
  // @@protoc_insertion_point(field_get:DarwinProto.RspInfo.ExpLayerInfo.exp_id)
  return exp_id_;
}
inline void RspInfo_ExpLayerInfo::set_exp_id(::google::protobuf::uint32 value) {
  set_has_exp_id();
  exp_id_ = value;
  // @@protoc_insertion_point(field_set:DarwinProto.RspInfo.ExpLayerInfo.exp_id)
}

// repeated .DarwinProto.RspInfo.ExpParam exp_param = 3;
inline int RspInfo_ExpLayerInfo::exp_param_size() const {
  return exp_param_.size();
}
inline void RspInfo_ExpLayerInfo::clear_exp_param() {
  exp_param_.Clear();
}
inline const ::DarwinProto::RspInfo_ExpParam& RspInfo_ExpLayerInfo::exp_param(int index) const {
  // @@protoc_insertion_point(field_get:DarwinProto.RspInfo.ExpLayerInfo.exp_param)
  return exp_param_.Get(index);
}
inline ::DarwinProto::RspInfo_ExpParam* RspInfo_ExpLayerInfo::mutable_exp_param(int index) {
  // @@protoc_insertion_point(field_mutable:DarwinProto.RspInfo.ExpLayerInfo.exp_param)
  return exp_param_.Mutable(index);
}
inline ::DarwinProto::RspInfo_ExpParam* RspInfo_ExpLayerInfo::add_exp_param() {
  // @@protoc_insertion_point(field_add:DarwinProto.RspInfo.ExpLayerInfo.exp_param)
  return exp_param_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::DarwinProto::RspInfo_ExpParam >*
RspInfo_ExpLayerInfo::mutable_exp_param() {
  // @@protoc_insertion_point(field_mutable_list:DarwinProto.RspInfo.ExpLayerInfo.exp_param)
  return &exp_param_;
}
inline const ::google::protobuf::RepeatedPtrField< ::DarwinProto::RspInfo_ExpParam >&
RspInfo_ExpLayerInfo::exp_param() const {
  // @@protoc_insertion_point(field_list:DarwinProto.RspInfo.ExpLayerInfo.exp_param)
  return exp_param_;
}

// -------------------------------------------------------------------

// RspInfo

// repeated .DarwinProto.RspInfo.ExpLayerInfo exp_info = 1;
inline int RspInfo::exp_info_size() const {
  return exp_info_.size();
}
inline void RspInfo::clear_exp_info() {
  exp_info_.Clear();
}
inline const ::DarwinProto::RspInfo_ExpLayerInfo& RspInfo::exp_info(int index) const {
  // @@protoc_insertion_point(field_get:DarwinProto.RspInfo.exp_info)
  return exp_info_.Get(index);
}
inline ::DarwinProto::RspInfo_ExpLayerInfo* RspInfo::mutable_exp_info(int index) {
  // @@protoc_insertion_point(field_mutable:DarwinProto.RspInfo.exp_info)
  return exp_info_.Mutable(index);
}
inline ::DarwinProto::RspInfo_ExpLayerInfo* RspInfo::add_exp_info() {
  // @@protoc_insertion_point(field_add:DarwinProto.RspInfo.exp_info)
  return exp_info_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::DarwinProto::RspInfo_ExpLayerInfo >*
RspInfo::mutable_exp_info() {
  // @@protoc_insertion_point(field_mutable_list:DarwinProto.RspInfo.exp_info)
  return &exp_info_;
}
inline const ::google::protobuf::RepeatedPtrField< ::DarwinProto::RspInfo_ExpLayerInfo >&
RspInfo::exp_info() const {
  // @@protoc_insertion_point(field_list:DarwinProto.RspInfo.exp_info)
  return exp_info_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace DarwinProto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_expinfo_2eproto__INCLUDED
