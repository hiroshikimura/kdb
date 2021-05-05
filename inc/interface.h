#if defined(INTERFACE_H)
#else
#define INTERFACE_H
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*
  - セッション確立について
    - セッション確率は、TLSで行う
*/

typedef struct _tag_INTERFACE_SERVER {
    SSL_METHOD*     methods;
    SSL_CTX*        context;
    SSL_SESSION*    session;
    SSL*            connection;

} INTERFACE_SERVER;

typedef struct _tag_INTERFACE_CLIENT {
    SSL_METHOD*     methods;
    SSL_CTX*        context;
    SSL_SESSION*    session;
    SSL*            connection;
} INTERFACE_CLIENT;


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* defined(INTERFACE_H) */
