/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmouslim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 00:00:00 by nmouslim          #+#    #+#             */
/*   Updated: 2025/04/25 00:00:00 by nmouslim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

static void	test(const char *label)
{
	printf("\n--- %s ---\n", label);
}

int	main(void)
{
	int		my;
	int		ref;
	void	*ptr;

	/* %x — lowercase hex */
	test("%x zero");
	ref = printf("ref: [%x]\n", 0);
	my  = ft_printf("my:  [%x]\n", 0);
	printf("return: ref=%d my=%d\n", ref, my);

	test("%x single digit");
	ref = printf("ref: [%x]\n", 9);
	my  = ft_printf("my:  [%x]\n", 9);
	printf("return: ref=%d my=%d\n", ref, my);

	test("%x 16 (boundary)");
	ref = printf("ref: [%x]\n", 16);
	my  = ft_printf("my:  [%x]\n", 16);
	printf("return: ref=%d my=%d\n", ref, my);

	test("%x 255");
	ref = printf("ref: [%x]\n", 255);
	my  = ft_printf("my:  [%x]\n", 255);
	printf("return: ref=%d my=%d\n", ref, my);

	test("%x large");
	ref = printf("ref: [%x]\n", 0x10000000);
	my  = ft_printf("my:  [%x]\n", 0x10000000);
	printf("return: ref=%d my=%d\n", ref, my);

	test("%x UINT_MAX");
	ref = printf("ref: [%x]\n", UINT_MAX);
	my  = ft_printf("my:  [%x]\n", UINT_MAX);
	printf("return: ref=%d my=%d\n", ref, my);

	/* %X — uppercase hex */
	test("%X zero");
	ref = printf("ref: [%X]\n", 0);
	my  = ft_printf("my:  [%X]\n", 0);
	printf("return: ref=%d my=%d\n", ref, my);

	test("%X 255");
	ref = printf("ref: [%X]\n", 255);
	my  = ft_printf("my:  [%X]\n", 255);
	printf("return: ref=%d my=%d\n", ref, my);

	test("%X UINT_MAX");
	ref = printf("ref: [%X]\n", UINT_MAX);
	my  = ft_printf("my:  [%X]\n", UINT_MAX);
	printf("return: ref=%d my=%d\n", ref, my);

	/* %p — pointer */
	test("%p NULL");
	ref = printf("ref: [%p]\n", NULL);
	my  = ft_printf("my:  [%p]\n", NULL);
	printf("return: ref=%d my=%d\n", ref, my);

	test("%p small");
	ptr = (void *)0x1;
	ref = printf("ref: [%p]\n", ptr);
	my  = ft_printf("my:  [%p]\n", ptr);
	printf("return: ref=%d my=%d\n", ref, my);

	test("%p normal");
	ptr = (void *)0x12345678;
	ref = printf("ref: [%p]\n", ptr);
	my  = ft_printf("my:  [%p]\n", ptr);
	printf("return: ref=%d my=%d\n", ref, my);

	test("%p large address");
	ptr = (void *)0xffffffffffffffff;
	ref = printf("ref: [%p]\n", ptr);
	my  = ft_printf("my:  [%p]\n", ptr);
	printf("return: ref=%d my=%d\n", ref, my);

	test("%p stack address");
	ref = printf("ref: [%p]\n", (void *)&ref);
	my  = ft_printf("my:  [%p]\n", (void *)&ref);
	printf("return: ref=%d my=%d\n", ref, my);

	return (0);
}