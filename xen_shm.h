/*
 * Xen shared memory module headers
 *
 * Authors: Vincent Brillault <git@lerya.net>
 *          Pierre Pfister    <pierre.pfister@polytechnique.org>
 *
 * This file contains the public headers of the Xen
 * shared memory module. It provides the user-space all
 * the needed structures and values to use to xen_shm
 * device.
 *
 * This module gives the users of virtual machine over
 * a Xen Hypervisor a way to share pages of memory with
 * some other program on a possibly different virtual
 * machine.
 * It also provides waiting and notifying mechanisms
 * between the two processes.
 *
 */

/*
 * General configuration
 */


/* The maximum number of aligned pages that can be provided */
#define XEN_SHM_ALLOC_ALIGNED_PAGES 16

/* The maximum number of pages the shared-memory module can provide to the user */
#define XEN_SHM_MAX_SHARED_PAGES (XEN_SHM_ALLOC_ALIGNED_PAGES - 1)

/*
 * IOCTL's command numbers and structures
 * Best practice is to use macro to generate those numbers. It's not done by now.
 */

#define XEN_SHM_IOCTL_INIT_OFFERER    0xf01
#define XEN_SHM_IOCTL_INIT_RECEIVER   0xf02
#define XEN_SHM_IOCTL_WAIT            0xf03
#define XEN_SHM_IOCTL_SSIG            0xf04

