/* 
 * this file include mainly inet layer structs and functions definitions 
 * inet struct is created for netif_port; relation: one port can contain multi inet_info structs 
 * one inet_info struct can contain multi netif ports; 
 */

#ifndef _INET_H
#define _INET_H

#include <netinet/in.h>

struct inet_addr {
	struct in_addr	ipv4;
	struct in6_addr	ipv6;
};

struct inet_info {

	struct inet_addr	addr; 	/* binrary form, use inet_ntop to make readable if besoin */ 
	struct inet_addr	bcast;
	uint32_t		mask;  

	struct netif_port	*port[]; 
	
	struct head_list	link;
} __rte_cache_aligned; 

#endif


/*
 * check netif_port table, free inet_info buffer when it is refered by nil
 */ 
void
remove_inet_info(struct inet_info *inet)

void
add_inet_info(struct inet_info *inet)
