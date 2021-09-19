/*
** EPITECH PROJECT, 2020
** EPITECH 2020
** File description:
** epitech bitmap
*/

#ifndef HEADER_H_
#define HEADER_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>

typedef struct	__attribute__ ((packed)) s_bmp_header
{
    uint16_t	magic;
    uint32_t	size;
    uint16_t	_app1;
    uint16_t	_app2;
    uint32_t	offset;
}	bmp_header_t;

typedef struct	__attribute__ ((packed)) s_bmp_info_header
{
    uint32_t	size;
    uint32_t	width;
    uint32_t	height;
    uint16_t	planes;
    uint16_t	bpp;
    uint32_t	compression;
    uint32_t	raw_data_size;
    uint32_t	h_resolution;
    uint32_t	v_resolution;
    uint32_t	palette_size;
    uint32_t	important_colors;
}	bmp_info_header_t;

void	make_bmp_header(bmp_header_t *header, size_t size);
void	make_bmp_info_header(bmp_info_header_t *header, size_t size);

#endif
