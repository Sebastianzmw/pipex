/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:10:15 by zhewong           #+#    #+#             */
/*   Updated: 2024/08/05 15:10:17 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	error_exit(char *str)
{
	perror(str);
	exit(EXIT_FAILURE);
}

int	openfile(char *file, int mode)
{
	int	fd;

	fd = -1;
	if (mode == 0)
		fd = open(file, O_RDONLY);
	else if (mode == 1)
		fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (fd == -1)
		error_exit("openfile error");
	return (fd);
}

void	free_arrays(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	*find_command(char *cmd, char **envp)
{
	int		i;
	char	*path;
	char	**direcs;
	char	*fullpath;

	i = 0;
	while (envp[i] && ft_strncmp(envp[i], "PATH=", 5))
		i++;
	if (!envp[i])
		return (NULL);
	path = ft_strdup(envp[i] + 5);
	direcs = ft_split(path, ':');
	free(path);
	i = 0;
	while (direcs[i])
	{
		char	*temp = ft_strjoin(direcs[i], "/");
		fullpath = ft_strjoin(temp, cmd);
		free(temp);
		if (access(fullpath, F_OK | X_OK) == 0)
			return (free_arrays(direcs), fullpath);
		free(fullpath);
		i++;
	}
	free_arrays(direcs);
	return (NULL);
}

void	execute(char *cmd, char **envp)
{
	char	**args;
	char	*fullpath;

	args = ft_split(cmd, ' ');
	if (!args)
		error_exit("Malloc failed");
	fullpath = find_command(args[0], envp);
	if (!fullpath)
	{
		free_arrays(args);
		error_exit("command not found");
	}
	if (execve(fullpath, args, envp) == -1)
	{
		free(fullpath);
		free_arrays(args);
		error_exit("command execution failed");
	}
}
