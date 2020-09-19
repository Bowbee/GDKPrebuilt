/* Copyright (c) Improbable Worlds Ltd, All Rights Reserved. */
#ifndef WORKER_SDK_C_INCLUDE_IMPROBABLE_NGRPC_H
#define WORKER_SDK_C_INCLUDE_IMPROBABLE_NGRPC_H

/**
 * This file defines a low-level gRPC (https://grpc.io/) client.
 * It currently only supports unary (non-streaming) gRPC calls.
 *
 * Example usage (non-secure):
 *
 *   #include <stdint.h>
 *   #include <stdio.h>
 *   #include <stdlib.h>
 *
 *   Ngrpc_Parameters grpc_params = {0};
 *   grpc_params.connect_timeout_ms = 5000;
 *   Ngrpc_Client* grpc = Ngrpc_Create("localhost", 50051, &grpc_params);
 *   Ngrpc_Status create_status = Ngrpc_GetStatus(grpc);
 *   if (create_status.code != NGRPC_STATUS_CODE_OK) {
 *     fprintf(stderr, "Failed to create gRPC client:\n  %s\n", create_status.message);
 *     Ngrpc_Destroy(grpc);
 *     exit(EXIT_FAILURE);
 *   }
 *   Ngrpc_CallParameters call_params = {0};
 *   call_params.timeout_ms = 5000;
 *   Ngrpc_Call* call = Ngrpc_MakeCall(grpc, "/test.Service/Method", &call_params);
 *   const uint8_t payload[] = {0x08, 0x2a};  // Message in binary protobuf format.
 *   if (Ngrpc_Send(call, payload, sizeof payload)) {
 *     Ngrpc_Buffer response = Ngrpc_Receive(call);
 *     if (response.buffer) {
 *       // Process response here...
 *     } else {
 *       printf("Receive failed.\n");
 *     }
 *   } else {
 *     printf("Send failed.\n");
 *   }
 *   Ngrpc_Status result = Ngrpc_FinishCall(call);
 *   printf("Status code: %s (%d)\n", Ngrpc_StatusCodeToString(result.code), result.code);
 *   printf("Status message: %s\n", result.message);
 *   Ngrpc_DestroyCall(call);
 *   Ngrpc_Destroy(grpc);
 */

#include <stdint.h>

#ifdef WORKER_DLL
#ifdef WORKER_DLL_EXPORT
#if defined(_MSC_VER) || defined(__ORBIS__)
#define WORKER_API __declspec(dllexport)
#else /* defined(_MSC_VER) || defined(__ORBIS__) */
#define WORKER_API __attribute__((visibility("default")))
#endif /* defined(_MSC_VER) || defined(__ORBIS__) */
#else  /* WORKER_DLL_EXPORT */
#if defined(_MSC_VER) || defined(__ORBIS__)
#define WORKER_API __declspec(dllimport)
#else /* defined(_MSC_VER) || defined(__ORBIS__) */
#define WORKER_API
#endif /* defined(_MSC_VER) || defined(__ORBIS__) */
#endif /* WORKER_DLL_EXPORT */
#else  /* WORKER_DLL */
#define WORKER_API
#endif /* WORKER_DLL */

#ifdef __cplusplus
#ifndef WORKER_SDK_C_DISABLE_NAMESPACE
namespace worker {
namespace c {
#endif /* WORKER_SDK_C_DISABLE_NAMESPACE */
extern "C" {
#endif /* __cplusplus */

/** The gRPC client root object. Can be used for multiple calls to a single a server. */
typedef struct Ngrpc_Client Ngrpc_Client;
/** A single gRPC call. */
typedef struct Ngrpc_Call Ngrpc_Call;

/* Forward declarations. */
typedef struct Ngrpc_Parameters Ngrpc_Parameters;
typedef struct Ngrpc_TlsParameters Ngrpc_TlsParameters;
typedef struct Ngrpc_Status Ngrpc_Status;
typedef struct Ngrpc_CallParameters Ngrpc_CallParameters;
typedef struct Ngrpc_CallMetadata Ngrpc_CallMetadata;
typedef struct Ngrpc_Buffer Ngrpc_Buffer;

/** gRPC status code. Mirrors https://github.com/grpc/grpc/blob/master/doc/statuscodes.md. */
typedef enum Ngrpc_StatusCode {
  NGRPC_STATUS_CODE_OK = 0,
  NGRPC_STATUS_CODE_CANCELLED = 1,
  NGRPC_STATUS_CODE_UNKNOWN = 2,
  NGRPC_STATUS_CODE_INVALID_ARGUMENT = 3,
  NGRPC_STATUS_CODE_DEADLINE_EXCEEDED = 4,
  NGRPC_STATUS_CODE_NOT_FOUND = 5,
  NGRPC_STATUS_CODE_ALREADY_EXISTS = 6,
  NGRPC_STATUS_CODE_PERMISSION_DENIED = 7,
  NGRPC_STATUS_CODE_RESOURCE_EXHAUSTED = 8,
  NGRPC_STATUS_CODE_FAILED_PRECONDITION = 9,
  NGRPC_STATUS_CODE_ABORTED = 10,
  NGRPC_STATUS_CODE_OUT_OF_RANGE = 11,
  NGRPC_STATUS_CODE_UNIMPLEMENTED = 12,
  NGRPC_STATUS_CODE_INTERNAL = 13,
  NGRPC_STATUS_CODE_UNAVAILABLE = 14,
  NGRPC_STATUS_CODE_DATA_LOSS = 15,
  NGRPC_STATUS_CODE_UNAUTHENTICATED = 16,
  /** An internal error of this gRPC client implementation. */
  NGRPC_STATUS_CODE_NGRPC_CLIENT_ERROR = 100,
} Ngrpc_StatusCode;

/** Parameters to create an Ngrpc_Client. */
struct Ngrpc_Parameters {
  /** The connection timeout in milliseconds. Use 0 for no timeout. */
  uint64_t connect_timeout_ms;
  /** Whether to use a secure connection (TLS). */
  uint8_t use_tls;
  /** Parameters for TLS. Ignored if `use_tls` is not set. */
  Ngrpc_TlsParameters* tls_params;
};

/**
 * Transport Layer Security (TLS) parameters. Ngrpc_Client does not attempt to use the platform-
 * specific root certificate store of the current machine. Instead, one or more root certificates
 * must be provided as part of the connection parameters.
 */
struct Ngrpc_TlsParameters {
  /** Number of root certificates. */
  uint32_t root_certificate_count;
  /** Pointer to root certificates in PEM format. */
  const char* const* root_certificates;
};

/**
 * A gRPC status code and message. Used as the result of initial connection and individual calls.
 */
struct Ngrpc_Status {
  /** The gRPC status code. */
  Ngrpc_StatusCode code;
  /** The status message. Always non-NULL, but can be empty. */
  const char* message;
};

/** Parameters to create an Ngrpc_Call. */
struct Ngrpc_CallParameters {
  /** Timeout for the entire call in milliseconds. Use 0 for no timeout. */
  uint64_t timeout_ms;
  /** Number of metadata key-value pairs to attach to the call. */
  uint32_t metadata_count;
  /** Pointer to metadata key-value pairs. */
  const Ngrpc_CallMetadata* metadata;
};

/** Metadata key-value pairs to attach to a gRPC call. */
struct Ngrpc_CallMetadata {
  /** Key string. Must be unique, lower case, and not clash with a standard HTTP/2 header name. */
  const char* key;
  /** Value string. */
  const char* value;
};

/** A pointer to a block of binary data and its length. */
struct Ngrpc_Buffer {
  /** Pointer to the data. Can be NULL to indicate an end-of-stream or error condition. */
  const uint8_t* buffer;
  /** Length of the data. */
  uint32_t length;
};

/**
 * Creates an Ngrpc_Client which can be used to make calls to the specified gRPC server. Always
 * returns a valid (non-NULL) pointer - use Ngrpc_GetStatus to check if creation was actually
 * successful. All operations on an Ngrpc_Client and any of its associated Ngrpc_Calls are not
 * thread-safe, so must not be performed concurrently. Use Ngrpc_Destroy to free resources when
 * finished.
 */
WORKER_API Ngrpc_Client* Ngrpc_Create(const char* hostname, uint16_t port,
                                      const Ngrpc_Parameters* params);
/**
 * Returns the status of the Ngrpc_Client object. This will have code NGRPC_STATUS_CODE_OK if
 * initial creation was successful, otherwise it will describe the error that occurred. The return
 * value is the same throughout the lifetime of the Ngrpc_Client object. The returned status message
 * string is only valid up until Ngrpc_Destroy is called on the Ngrpc_Client object.
 */
WORKER_API Ngrpc_Status Ngrpc_GetStatus(Ngrpc_Client* client);
/**
 * Destroys (frees the resources associated with) the given Ngrpc_Client. Any active Ngrpc_Call
 * objects associated with the Ngrpc_Client are also destroyed.
 */
WORKER_API void Ngrpc_Destroy(Ngrpc_Client* client);

/**
 * Creates a gRPC call object for making a single call. Always returns a valid (non-NULL) pointer.
 * Use Ngrpc_DestroyCall (or Ngrpc_Destroy) to free resources when finished.
 */
WORKER_API Ngrpc_Call* Ngrpc_MakeCall(Ngrpc_Client* client, const char* method_path,
                                      const Ngrpc_CallParameters* params);
/**
 * Sends the request portion of a gRPC call. Currently only supported once per Ngrpc_Call (no
 * streaming). This function blocks until the send has completed (or an error or timeout occurs).
 * Return value is 0 for failure, 1 for success. Retrieve error information using Ngrpc_FinishCall.
 */
WORKER_API uint8_t Ngrpc_Send(Ngrpc_Call* call, const uint8_t* buffer, uint32_t length);
/**
 * Receives the response portion of a gRPC call. This function blocks until a response is received
 * (or an error or timeout occurs). The pointer in the returned Ngrpc_Buffer will be NULL if
 * end-of-stream was reached or an error occurred. After such a NULL value, all future calls to
 * Ngrpc_Receive with the same Ngrpc_Call object will also return NULL. As streaming responses are
 * not currently supported, the second call will always return NULL. Retrieve error information
 * using Ngrpc_FinishCall (NGRPC_STATUS_CODE_OK indicating that end-of-stream occurred rather than
 * an actual error). The returned buffer is only valid until the next Ngrpc_Receive or
 * Ngrpc_FinishCall operation on the Ngrpc_Call object.
 */
WORKER_API Ngrpc_Buffer Ngrpc_Receive(Ngrpc_Call* call);
/**
 * Finishes a gRPC call, returning the call status information. Can only be called once per
 * Ngrpc_Call object, and no operation other than Ngrpc_DestroyCall can be performed on the
 * Ngrpc_Call object subsequently. The returned status message string is only valid up until
 * Ngrpc_DestroyCall is called on the Ngrpc_Call object.
 */
WORKER_API Ngrpc_Status Ngrpc_FinishCall(Ngrpc_Call* call);
/** Destroys (frees the resources associated with) the given Ngrpc_Call. */
WORKER_API void Ngrpc_DestroyCall(Ngrpc_Call* call);

/**
 * Converts a gRPC status code into string form, for example, for inclusion in log messages. The
 * returned string is always non-NULL, but can be empty in case of an unknown status code. The
 * returned string is valid indefinitely.
 */
WORKER_API const char* Ngrpc_StatusCodeToString(Ngrpc_StatusCode status);
/**
 * Returns Improbable's TLS root certificate in PEM format. Populate Ngrpc_TlsParameters with this
 * value to use Platform SDK services. The returned string is valid indefinitely.
 */
WORKER_API const char* Ngrpc_GetImprobableRootCertificate();

#ifdef __cplusplus
#ifndef WORKER_SDK_C_DISABLE_NAMESPACE
} /* namespace c */
} /* namespace worker */
#endif /* WORKER_SDK_C_DISABLE_NAMESPACE */
} /* extern "C" */
#endif /* __cplusplus */

#endif /* WORKER_SDK_C_INCLUDE_IMPROBABLE_NGRPC_H */

#ifdef __cplusplus
#ifndef WORKER_SDK_C_DISABLE_NAMESPACE
#ifndef WORKER_SDK_C_DISABLE_AUTO_USE_NAMESPACE
using namespace worker::c;
#endif /* WORKER_SDK_C_DISABLE_AUTO_USE_NAMESPACE */
#endif /* WORKER_SDK_C_DISABLE_NAMESPACE */
#endif /* __cplusplus */
