/* 
 * we use RTC run to completion Mode, e.x. four certain lcores map to one port,
 * network interface, port conf struct
 */

#ifndef _NETIF_H
#define _NETIF_H

#define MAX_PORT_NAME_SIZE 	16

struct netif_port {
	char 			name[MAX_PORT_NAME_SIZE];		 /* note in rte_eth_dev_data struct, we have Uniq identifier name */
	struct rte_eth_dev_info devinfo; 				 /* include rx, tx ring config */
	struct rte_eth_dev	dev;  			 		 /* include rte_eth_dev_conf e.x. RX TX Port config in rte_eth_dev_data */ 
	struct rte_eth_stats    stats;	
	
	struct inet_info	inet;					 /* network layer struct contains ipv4 config */

	struct head_list 	list;					 /* this is used to link netif port structs */ 
} __rte_cache_aligned;

/*
 * this function include rte_eth_dev_configure, rte_eth_rx_queue_setup,
 * rte_eth_tx_queue_setup, rte_eth_dev_start 
 */
static void
netif_port_start(struct netif_port *port)

#endif
