/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 12:23:51 by mmanley           #+#    #+#             */
/*   Updated: 2018/03/29 14:12:02 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKS_H
# define CHECKS_H

enum {A = 1, B = 2, C = 4, D = 8, E = 16, F = 32, G = 64, HE = 128, I = 256,
	JAY = 512, K = 1024, EL = 2048, M = 4096, N = 8192, O = 16384, P = 32768,
	Q = 65536, R = 131072};
int		options(char *s, int *oct);
int		reac_manager(char *l1, char *l2, int *sv, int ret);

#endif
