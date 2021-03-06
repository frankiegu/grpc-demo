// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: maths.proto
#ifndef GRPC_maths_2eproto__INCLUDED
#define GRPC_maths_2eproto__INCLUDED

#include "maths.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace maths {

class Maths final {
 public:
  static constexpr char const* service_full_name() {
    return "maths.Maths";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // rpc DoMath(MathRequest) returns (MathResponse);
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::maths::MathRequest, ::maths::MathResponse>> DoMathStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::maths::MathRequest, ::maths::MathResponse>>(DoMathStreamRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::maths::MathRequest, ::maths::MathResponse>> AsyncDoMathStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::maths::MathRequest, ::maths::MathResponse>>(AsyncDoMathStreamRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::maths::MathRequest, ::maths::MathResponse>> PrepareAsyncDoMathStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::maths::MathRequest, ::maths::MathResponse>>(PrepareAsyncDoMathStreamRaw(context, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // rpc DoMath(MathRequest) returns (MathResponse);
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientReaderWriterInterface< ::maths::MathRequest, ::maths::MathResponse>* DoMathStreamRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::maths::MathRequest, ::maths::MathResponse>* AsyncDoMathStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::maths::MathRequest, ::maths::MathResponse>* PrepareAsyncDoMathStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReaderWriter< ::maths::MathRequest, ::maths::MathResponse>> DoMathStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::maths::MathRequest, ::maths::MathResponse>>(DoMathStreamRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::maths::MathRequest, ::maths::MathResponse>> AsyncDoMathStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::maths::MathRequest, ::maths::MathResponse>>(AsyncDoMathStreamRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::maths::MathRequest, ::maths::MathResponse>> PrepareAsyncDoMathStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::maths::MathRequest, ::maths::MathResponse>>(PrepareAsyncDoMathStreamRaw(context, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientReaderWriter< ::maths::MathRequest, ::maths::MathResponse>* DoMathStreamRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::maths::MathRequest, ::maths::MathResponse>* AsyncDoMathStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::maths::MathRequest, ::maths::MathResponse>* PrepareAsyncDoMathStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_DoMathStream_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // rpc DoMath(MathRequest) returns (MathResponse);
    virtual ::grpc::Status DoMathStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::maths::MathResponse, ::maths::MathRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_DoMathStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DoMathStream() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_DoMathStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoMathStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::maths::MathResponse, ::maths::MathRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDoMathStream(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::maths::MathResponse, ::maths::MathRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_DoMathStream<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_DoMathStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DoMathStream() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_DoMathStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoMathStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::maths::MathResponse, ::maths::MathRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_DoMathStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_DoMathStream() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_DoMathStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoMathStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::maths::MathResponse, ::maths::MathRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDoMathStream(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef Service StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef Service StreamedService;
};

}  // namespace maths


#endif  // GRPC_maths_2eproto__INCLUDED
