#ifndef __SGW_PATH_H__
#define __SGW_PATH_H__

#include "gtp_xact.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

CORE_DECLARE(status_t) sgw_path_open();
CORE_DECLARE(status_t) sgw_path_close();

CORE_DECLARE(status_t) sgw_s11_send_to_mme(
    gtp_xact_t *xact, c_uint8_t type, c_uint32_t teid, pkbuf_t *pkbuf);
CORE_DECLARE(status_t) sgw_s5c_send_to_pgw(
    gtp_xact_t *assoc_xact, c_uint8_t type, c_uint32_t teid, pkbuf_t *pkbuf);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __SGW_PATH_H__ */
