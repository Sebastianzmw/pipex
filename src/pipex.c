/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:48:46 by zhewong           #+#    #+#             */
/*   Updated: 2024/08/01 15:48:48 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	child_process(int *fd, char **argv, char **envp);
void	parent_process(int *fd, char **argv, char **envp);

int	main(int argc, char **argv, char **envp)
{
	int		fd[2];
	pid_t	pid1;

	if (argc == 5)
	{
		if (pipe(fd) == -1)
			error_exit("Pipe failed");
		pid1 = fork();
		if (pid1 == -1)
			error_exit("Fork failed");
		if (pid1 == 0)
			child_process(fd, argv, envp);
		waitpid(pid1, NULL, 0);
		parent_process(fd, argv, envp);
	}
	else
	{
		error_exit("Usage: ./pipex file1 cmd1 cmd 2 file2");
	}
	return (0);
}

void	child_process(int *fd, char **argv, char **envp)
{
	int	filein;

	filein = openfile(argv[1], 0);
	if (filein == -1)
		error_exit("Filein failed");
	close(fd[0]);
	dup2(filein, STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	close(filein);
	execute(argv[2], envp);
}

void	parent_process(int *fd, char **argv, char **envp)
{
	int	fileout;

	fileout = openfile(argv[4], 1);
	if (fileout == -1)
		error_exit("Fileout failed");
	close(fd[1]);
	dup2(fileout, STDOUT_FILENO);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	close(fileout);
	execute(argv[3], envp);
}
