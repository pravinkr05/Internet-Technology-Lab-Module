/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ADD_H_RPCGEN
#define _ADD_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct num {
	int a;
};
typedef struct num num;

#define ADD_PROG 0x23451111
#define ADD_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define add 1
extern  int * add_1(num *, CLIENT *);
extern  int * add_1_svc(num *, struct svc_req *);
extern int add_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define add 1
extern  int * add_1();
extern  int * add_1_svc();
extern int add_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_num (XDR *, num*);

#else /* K&R C */
extern bool_t xdr_num ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ADD_H_RPCGEN */