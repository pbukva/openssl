/*
 * Copyright 1995-2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

/*
 * NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/objects.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_OBJ,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_OBJ,0,reason)

static ERR_STRING_DATA OBJ_str_functs[] = {
    {ERR_FUNC(OBJ_F_OBJ_ADD_OBJECT), "OBJ_add_object"},
    {ERR_FUNC(OBJ_F_OBJ_CREATE), "OBJ_create"},
    {ERR_FUNC(OBJ_F_OBJ_DUP), "OBJ_dup"},
    {ERR_FUNC(OBJ_F_OBJ_NAME_NEW_INDEX), "OBJ_NAME_new_index"},
    {ERR_FUNC(OBJ_F_OBJ_NID2LN), "OBJ_nid2ln"},
    {ERR_FUNC(OBJ_F_OBJ_NID2OBJ), "OBJ_nid2obj"},
    {ERR_FUNC(OBJ_F_OBJ_NID2SN), "OBJ_nid2sn"},
    {0, NULL}
};

static ERR_STRING_DATA OBJ_str_reasons[] = {
    {ERR_REASON(OBJ_R_MALLOC_FAILURE), "malloc failure"},
    {ERR_REASON(OBJ_R_UNKNOWN_NID), "unknown nid"},
    {0, NULL}
};

#endif

void ERR_load_OBJ_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(OBJ_str_functs[0].error) == NULL) {
        ERR_load_strings(0, OBJ_str_functs);
        ERR_load_strings(0, OBJ_str_reasons);
    }
#endif
}
