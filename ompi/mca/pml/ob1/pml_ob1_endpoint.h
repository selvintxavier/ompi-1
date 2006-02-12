/*
 * Copyright (c) 2004-2005 The Trustees of Indiana University and Indiana
 *                         University Research and Technology
 *                         Corporation.  All rights reserved.
 * Copyright (c) 2004-2005 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart, 
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * $COPYRIGHT$
 * 
 * Additional copyrights may follow
 * 
 * $HEADER$
 */
/**
 * @file
 */
#ifndef MCA_PML_OB1_ENDPOINT_H
#define MCA_PML_OB1_ENDPOINT_H

#include "opal/util/output.h"
#include "ompi/mca/btl/btl.h"
#if defined(c_plusplus) || defined(__cplusplus)
extern "C" {
#endif

/*
 * Compute the total number of bytes on supplied descriptor
 */
#define MCA_PML_OB1_COMPUTE_SEGMENT_LENGTH(segments, count, hdrlen, length) \
do {                                                                        \
   size_t i;                                                                \
                                                                            \
   for( i = 0; i < count; i++ ) {                                           \
       length += segments[i].seg_len;                                       \
   }                                                                        \
   length -= hdrlen;                                                        \
} while(0)

#if defined(c_plusplus) || defined(__cplusplus)
}
#endif
#endif

