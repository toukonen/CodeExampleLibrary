// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ping_pong.proto
#ifndef GRPC_ping_5fpong_2eproto__INCLUDED
#define GRPC_ping_5fpong_2eproto__INCLUDED

#include "ping_pong.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace pingpong {

class PingPongService final {
 public:
  static constexpr char const* service_full_name() {
    return "pingpong.PingPongService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status pingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest& request, ::pingpong::PongResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pingpong::PongResponse>> AsyncpingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pingpong::PongResponse>>(AsyncpingPongRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pingpong::PongResponse>> PrepareAsyncpingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pingpong::PongResponse>>(PrepareAsyncpingPongRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void pingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest* request, ::pingpong::PongResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void pingPong(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::pingpong::PongResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void pingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest* request, ::pingpong::PongResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void pingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest* request, ::pingpong::PongResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void pingPong(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::pingpong::PongResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void pingPong(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::pingpong::PongResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::pingpong::PongResponse>* AsyncpingPongRaw(::grpc::ClientContext* context, const ::pingpong::PingRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::pingpong::PongResponse>* PrepareAsyncpingPongRaw(::grpc::ClientContext* context, const ::pingpong::PingRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status pingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest& request, ::pingpong::PongResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pingpong::PongResponse>> AsyncpingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pingpong::PongResponse>>(AsyncpingPongRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pingpong::PongResponse>> PrepareAsyncpingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pingpong::PongResponse>>(PrepareAsyncpingPongRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void pingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest* request, ::pingpong::PongResponse* response, std::function<void(::grpc::Status)>) override;
      void pingPong(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::pingpong::PongResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void pingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest* request, ::pingpong::PongResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void pingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest* request, ::pingpong::PongResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void pingPong(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::pingpong::PongResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void pingPong(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::pingpong::PongResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
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
    ::grpc::ClientAsyncResponseReader< ::pingpong::PongResponse>* AsyncpingPongRaw(::grpc::ClientContext* context, const ::pingpong::PingRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::pingpong::PongResponse>* PrepareAsyncpingPongRaw(::grpc::ClientContext* context, const ::pingpong::PingRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_pingPong_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status pingPong(::grpc::ServerContext* context, const ::pingpong::PingRequest* request, ::pingpong::PongResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_pingPong : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_pingPong() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_pingPong() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status pingPong(::grpc::ServerContext* /*context*/, const ::pingpong::PingRequest* /*request*/, ::pingpong::PongResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestpingPong(::grpc::ServerContext* context, ::pingpong::PingRequest* request, ::grpc::ServerAsyncResponseWriter< ::pingpong::PongResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_pingPong<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_pingPong : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_pingPong() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::pingpong::PingRequest, ::pingpong::PongResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::pingpong::PingRequest* request, ::pingpong::PongResponse* response) { return this->pingPong(context, request, response); }));}
    void SetMessageAllocatorFor_pingPong(
        ::grpc::experimental::MessageAllocator< ::pingpong::PingRequest, ::pingpong::PongResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::pingpong::PingRequest, ::pingpong::PongResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_pingPong() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status pingPong(::grpc::ServerContext* /*context*/, const ::pingpong::PingRequest* /*request*/, ::pingpong::PongResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* pingPong(
      ::grpc::CallbackServerContext* /*context*/, const ::pingpong::PingRequest* /*request*/, ::pingpong::PongResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* pingPong(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::pingpong::PingRequest* /*request*/, ::pingpong::PongResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_pingPong<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_pingPong<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_pingPong : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_pingPong() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_pingPong() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status pingPong(::grpc::ServerContext* /*context*/, const ::pingpong::PingRequest* /*request*/, ::pingpong::PongResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_pingPong : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_pingPong() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_pingPong() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status pingPong(::grpc::ServerContext* /*context*/, const ::pingpong::PingRequest* /*request*/, ::pingpong::PongResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestpingPong(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_pingPong : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_pingPong() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->pingPong(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_pingPong() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status pingPong(::grpc::ServerContext* /*context*/, const ::pingpong::PingRequest* /*request*/, ::pingpong::PongResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* pingPong(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* pingPong(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_pingPong : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_pingPong() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::pingpong::PingRequest, ::pingpong::PongResponse>(
            [this](::grpc_impl::ServerContext* context,
                   ::grpc_impl::ServerUnaryStreamer<
                     ::pingpong::PingRequest, ::pingpong::PongResponse>* streamer) {
                       return this->StreamedpingPong(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_pingPong() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status pingPong(::grpc::ServerContext* /*context*/, const ::pingpong::PingRequest* /*request*/, ::pingpong::PongResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedpingPong(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::pingpong::PingRequest,::pingpong::PongResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_pingPong<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_pingPong<Service > StreamedService;
};

}  // namespace pingpong


#endif  // GRPC_ping_5fpong_2eproto__INCLUDED
