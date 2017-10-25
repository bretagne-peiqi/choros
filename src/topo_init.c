/*
 * Init rte_eal: detail info see dpdk/lib/librte_eal/common/rte_eal.h
 */

#include <rte_eal.h>

#define FAILURE_EXIT -1

void
init(int argc, char **argv)
{
	/* argv e.x. threads launch, hugepage manage init, see details on 
         * dpdk/lib/librte_eal/common/eal_common_options.c
         */
	err = rte_eal_init(argc, argv)
	if (err < 0)
		fprintf(stderr, "failed to init dpdk topology: error %d\n", err)
		exit(FAILURE_EXIT)

        	
	

}
