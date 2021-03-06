/* For license: see LICENSE file at top-level */

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif /* HAVE_CONFIG_H */

#include "shmemu.h"

#ifdef ENABLE_PSHMEM
#pragma weak _my_pe = p_my_pe
#define _my_pe p_my_pe
#pragma weak _num_pes = p_num_pes
#define _num_pes p_num_pes
#endif /* ENABLE_PSHMEM */

int
_my_pe(void)
{
    deprecate(__func__, 1, 2);
    return shmemc_my_pe();
}

int
_num_pes(void)
{
    deprecate(__func__, 1, 2);
    return shmemc_n_pes();
}
