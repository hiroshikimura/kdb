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
    /* サーバー秘密鍵 */
    /* クライアント公開鍵 */
    /* クライアント秘密鍵 */

} INTERFACE_SERVER;

typedef struct _tag_INTERFACE_CLIENT {
    /* サーバー公開鍵 */
    /* クライアント公開鍵 */
    /* クライアント秘密鍵 */

} INTERFACE_CLIENT;


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* defined(INTERFACE_H)
