// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ping_pong.proto

#include "ping_pong.pb.h"
#include "ping_pong.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace pingpong {

static const char* PingPongService_method_names[] = {
  "/pingpong.PingPongService/pingPong",
};

std::unique_ptr< PingPongService::Stub> PingPongService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< PingPongService::Stub> stub(new PingPongService::Stub(channel));
  return stub;
}

PingPongService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_pingPong_(PingPongService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status PingPongService::Stub::pingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest& request, ::pingpong::PongResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_pingPong_, context, request, response);
}

void PingPongService::Stub::experimental_async::pingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest* request, ::pingpong::PongResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_pingPong_, context, request, response, std::move(f));
}

void PingPongService::Stub::experimental_async::pingPong(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::pingpong::PongResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_pingPong_, context, request, response, std::move(f));
}

void PingPongService::Stub::experimental_async::pingPong(::grpc::ClientContext* context, const ::pingpong::PingRequest* request, ::pingpong::PongResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_pingPong_, context, request, response, reactor);
}

void PingPongService::Stub::experimental_async::pingPong(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::pingpong::PongResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_pingPong_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::pingpong::PongResponse>* PingPongService::Stub::AsyncpingPongRaw(::grpc::ClientContext* context, const ::pingpong::PingRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::pingpong::PongResponse>::Create(channel_.get(), cq, rpcmethod_pingPong_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::pingpong::PongResponse>* PingPongService::Stub::PrepareAsyncpingPongRaw(::grpc::ClientContext* context, const ::pingpong::PingRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::pingpong::PongResponse>::Create(channel_.get(), cq, rpcmethod_pingPong_, context, request, false);
}

PingPongService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PingPongService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PingPongService::Service, ::pingpong::PingRequest, ::pingpong::PongResponse>(
          [](PingPongService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::pingpong::PingRequest* req,
             ::pingpong::PongResponse* resp) {
               return service->pingPong(ctx, req, resp);
             }, this)));
}

PingPongService::Service::~Service() {
}

::grpc::Status PingPongService::Service::pingPong(::grpc::ServerContext* context, const ::pingpong::PingRequest* request, ::pingpong::PongResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace pingpong
