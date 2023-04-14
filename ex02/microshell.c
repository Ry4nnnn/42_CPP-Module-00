/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:31:57 by welim             #+#    #+#             */
/*   Updated: 2023/04/13 21:36:59 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "microshell.h"

int main (int argc, char **argv, char   **ev)
{
    int i;
    int fd[2];
    int temp_fd;
    (void)argc;

    i = 0;
    temp_fd = dup(STDIN_FILENO);
    while (argv[i] && argv[i + 1])
    {
        argv = &argv[i + 1];
        i = 0;
        while (argv[i] && strcmp(argv[i], ";") && strcmp(argv[i], "|"))
            i++;
        
    }
}