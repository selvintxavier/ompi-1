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
 *
 * Processor affinity for First_Use.
 */


#ifndef MCA_MAFFINITY_FIRST_USE_EXPORT_H
#define MCA_MAFFINITY_FIRST_USE_EXPORT_H

#include "opal_config.h"

#include "opal/mca/mca.h"
#include "opal/mca/maffinity/maffinity.h"


#if defined(c_plusplus) || defined(__cplusplus)
extern "C" {
#endif

    /**
     * Globally exported variable
     */
    OMPI_COMP_EXPORT extern const opal_maffinity_base_component_1_0_0_t
        mca_maffinity_first_use_component;


    /**
     * maffinity query API function
     */
    const opal_maffinity_base_module_1_0_0_t *
        opal_maffinity_first_use_component_query(int *query);

#if defined(c_plusplus) || defined(__cplusplus)
}
#endif
#endif /* MCA_MAFFINITY_FIRST_USE_EXPORT_H */
