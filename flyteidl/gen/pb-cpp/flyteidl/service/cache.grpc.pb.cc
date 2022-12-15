// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: flyteidl/service/cache.proto

#include "flyteidl/service/cache.pb.h"
#include "flyteidl/service/cache.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace flyteidl {
namespace service {

static const char* CacheService_method_names[] = {
  "/flyteidl.service.CacheService/EvictExecutionCache",
  "/flyteidl.service.CacheService/EvictTaskExecutionCache",
};

std::unique_ptr< CacheService::Stub> CacheService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< CacheService::Stub> stub(new CacheService::Stub(channel));
  return stub;
}

CacheService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_EvictExecutionCache_(CacheService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EvictTaskExecutionCache_(CacheService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status CacheService::Stub::EvictExecutionCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictExecutionCacheRequest& request, ::flyteidl::service::EvictCacheResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_EvictExecutionCache_, context, request, response);
}

void CacheService::Stub::experimental_async::EvictExecutionCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictExecutionCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_EvictExecutionCache_, context, request, response, std::move(f));
}

void CacheService::Stub::experimental_async::EvictExecutionCache(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::flyteidl::service::EvictCacheResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_EvictExecutionCache_, context, request, response, std::move(f));
}

void CacheService::Stub::experimental_async::EvictExecutionCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictExecutionCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_EvictExecutionCache_, context, request, response, reactor);
}

void CacheService::Stub::experimental_async::EvictExecutionCache(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::flyteidl::service::EvictCacheResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_EvictExecutionCache_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::flyteidl::service::EvictCacheResponse>* CacheService::Stub::AsyncEvictExecutionCacheRaw(::grpc::ClientContext* context, const ::flyteidl::service::EvictExecutionCacheRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::flyteidl::service::EvictCacheResponse>::Create(channel_.get(), cq, rpcmethod_EvictExecutionCache_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::flyteidl::service::EvictCacheResponse>* CacheService::Stub::PrepareAsyncEvictExecutionCacheRaw(::grpc::ClientContext* context, const ::flyteidl::service::EvictExecutionCacheRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::flyteidl::service::EvictCacheResponse>::Create(channel_.get(), cq, rpcmethod_EvictExecutionCache_, context, request, false);
}

::grpc::Status CacheService::Stub::EvictTaskExecutionCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictTaskExecutionCacheRequest& request, ::flyteidl::service::EvictCacheResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_EvictTaskExecutionCache_, context, request, response);
}

void CacheService::Stub::experimental_async::EvictTaskExecutionCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictTaskExecutionCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_EvictTaskExecutionCache_, context, request, response, std::move(f));
}

void CacheService::Stub::experimental_async::EvictTaskExecutionCache(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::flyteidl::service::EvictCacheResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_EvictTaskExecutionCache_, context, request, response, std::move(f));
}

void CacheService::Stub::experimental_async::EvictTaskExecutionCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictTaskExecutionCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_EvictTaskExecutionCache_, context, request, response, reactor);
}

void CacheService::Stub::experimental_async::EvictTaskExecutionCache(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::flyteidl::service::EvictCacheResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_EvictTaskExecutionCache_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::flyteidl::service::EvictCacheResponse>* CacheService::Stub::AsyncEvictTaskExecutionCacheRaw(::grpc::ClientContext* context, const ::flyteidl::service::EvictTaskExecutionCacheRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::flyteidl::service::EvictCacheResponse>::Create(channel_.get(), cq, rpcmethod_EvictTaskExecutionCache_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::flyteidl::service::EvictCacheResponse>* CacheService::Stub::PrepareAsyncEvictTaskExecutionCacheRaw(::grpc::ClientContext* context, const ::flyteidl::service::EvictTaskExecutionCacheRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::flyteidl::service::EvictCacheResponse>::Create(channel_.get(), cq, rpcmethod_EvictTaskExecutionCache_, context, request, false);
}

CacheService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CacheService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CacheService::Service, ::flyteidl::service::EvictExecutionCacheRequest, ::flyteidl::service::EvictCacheResponse>(
          std::mem_fn(&CacheService::Service::EvictExecutionCache), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CacheService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CacheService::Service, ::flyteidl::service::EvictTaskExecutionCacheRequest, ::flyteidl::service::EvictCacheResponse>(
          std::mem_fn(&CacheService::Service::EvictTaskExecutionCache), this)));
}

CacheService::Service::~Service() {
}

::grpc::Status CacheService::Service::EvictExecutionCache(::grpc::ServerContext* context, const ::flyteidl::service::EvictExecutionCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CacheService::Service::EvictTaskExecutionCache(::grpc::ServerContext* context, const ::flyteidl::service::EvictTaskExecutionCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace flyteidl
}  // namespace service

