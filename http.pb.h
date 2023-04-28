// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: http.proto

#ifndef PROTOBUF_http_2eproto__INCLUDED
#define PROTOBUF_http_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace example {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_http_2eproto();
void protobuf_AssignDesc_http_2eproto();
void protobuf_ShutdownFile_http_2eproto();

class HttpRequest;
class HttpResponse;

// ===================================================================

class HttpRequest : public ::google::protobuf::Message {
 public:
  HttpRequest();
  virtual ~HttpRequest();

  HttpRequest(const HttpRequest& from);

  inline HttpRequest& operator=(const HttpRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HttpRequest& default_instance();

  void Swap(HttpRequest* other);

  // implements Message ----------------------------------------------

  HttpRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HttpRequest& from);
  void MergeFrom(const HttpRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:example.HttpRequest)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_http_2eproto();
  friend void protobuf_AssignDesc_http_2eproto();
  friend void protobuf_ShutdownFile_http_2eproto();

  void InitAsDefaultInstance();
  static HttpRequest* default_instance_;
};
// -------------------------------------------------------------------

class HttpResponse : public ::google::protobuf::Message {
 public:
  HttpResponse();
  virtual ~HttpResponse();

  HttpResponse(const HttpResponse& from);

  inline HttpResponse& operator=(const HttpResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HttpResponse& default_instance();

  void Swap(HttpResponse* other);

  // implements Message ----------------------------------------------

  HttpResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HttpResponse& from);
  void MergeFrom(const HttpResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:example.HttpResponse)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_http_2eproto();
  friend void protobuf_AssignDesc_http_2eproto();
  friend void protobuf_ShutdownFile_http_2eproto();

  void InitAsDefaultInstance();
  static HttpResponse* default_instance_;
};
// ===================================================================

class HttpService_Stub;

class HttpService : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline HttpService() {};
 public:
  virtual ~HttpService();

  typedef HttpService_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void Echo(::google::protobuf::RpcController* controller,
                       const ::example::HttpRequest* request,
                       ::example::HttpResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void EchoProtobuf(::google::protobuf::RpcController* controller,
                       const ::example::HttpRequest* request,
                       ::example::HttpResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(HttpService);
};

class HttpService_Stub : public HttpService {
 public:
  HttpService_Stub(::google::protobuf::RpcChannel* channel);
  HttpService_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~HttpService_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements HttpService ------------------------------------------

  void Echo(::google::protobuf::RpcController* controller,
                       const ::example::HttpRequest* request,
                       ::example::HttpResponse* response,
                       ::google::protobuf::Closure* done);
  void EchoProtobuf(::google::protobuf::RpcController* controller,
                       const ::example::HttpRequest* request,
                       ::example::HttpResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(HttpService_Stub);
};


// -------------------------------------------------------------------

class FileService_Stub;

class FileService : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline FileService() {};
 public:
  virtual ~FileService();

  typedef FileService_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void default_method(::google::protobuf::RpcController* controller,
                       const ::example::HttpRequest* request,
                       ::example::HttpResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FileService);
};

class FileService_Stub : public FileService {
 public:
  FileService_Stub(::google::protobuf::RpcChannel* channel);
  FileService_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~FileService_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements FileService ------------------------------------------

  void default_method(::google::protobuf::RpcController* controller,
                       const ::example::HttpRequest* request,
                       ::example::HttpResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FileService_Stub);
};


// -------------------------------------------------------------------

class QueueService_Stub;

class QueueService : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline QueueService() {};
 public:
  virtual ~QueueService();

  typedef QueueService_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void start(::google::protobuf::RpcController* controller,
                       const ::example::HttpRequest* request,
                       ::example::HttpResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void stop(::google::protobuf::RpcController* controller,
                       const ::example::HttpRequest* request,
                       ::example::HttpResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void getstats(::google::protobuf::RpcController* controller,
                       const ::example::HttpRequest* request,
                       ::example::HttpResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(QueueService);
};

class QueueService_Stub : public QueueService {
 public:
  QueueService_Stub(::google::protobuf::RpcChannel* channel);
  QueueService_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~QueueService_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements QueueService ------------------------------------------

  void start(::google::protobuf::RpcController* controller,
                       const ::example::HttpRequest* request,
                       ::example::HttpResponse* response,
                       ::google::protobuf::Closure* done);
  void stop(::google::protobuf::RpcController* controller,
                       const ::example::HttpRequest* request,
                       ::example::HttpResponse* response,
                       ::google::protobuf::Closure* done);
  void getstats(::google::protobuf::RpcController* controller,
                       const ::example::HttpRequest* request,
                       ::example::HttpResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(QueueService_Stub);
};


// ===================================================================


// ===================================================================

// HttpRequest

// -------------------------------------------------------------------

// HttpResponse


// @@protoc_insertion_point(namespace_scope)

}  // namespace example

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_http_2eproto__INCLUDED
